#include <iostream>
using namespace std;

const int SIZE = 3;

bool isMovesLeft(int board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (board[i][j] == 0) {
                return true;
            }
        }
    }
    return false;
}

int evaluate(int board[SIZE][SIZE]) {
    for (int row = 0; row < SIZE; ++row) {
        if (board[row][0] == board[row][1] && board[row][1] == board[row][2]) {
            if (board[row][0] == -1) return +10;
            else if (board[row][0] == 1) return -10;
        }
    }

    for (int col = 0; col < SIZE; ++col) {
        if (board[0][col] == board[1][col] && board[1][col] == board[2][col]) {
            if (board[0][col] == -1) return +10;
            else if (board[0][col] == 1) return -10;
        }
    }

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        if (board[0][0] == -1) return +10;
        else if (board[0][0] == 1) return -10;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        if (board[0][2] == -1) return +10;
        else if (board[0][2] == 1) return -10;
    }

    return 0;
}

int minimax(int board[SIZE][SIZE], int depth, bool isMax) {
    int score = evaluate(board);

    if (score == 10) return score;
    if (score == -10) return score;
    if (!isMovesLeft(board)) return 0;

    if (isMax) {
        int best = -1000;
        for (int i = 0; i < SIZE; ++i) {
            for (int j = 0; j < SIZE; ++j) {
                if (board[i][j] == 0) {
                    board[i][j] = -1;
                    best = max(best, minimax(board, depth + 1, !isMax));
                    board[i][j] = 0;
                }
            }
        }
        return best;
    }
    else {
        int best = 1000;
        for (int i = 0; i < SIZE; ++i) {
            for (int j = 0; j < SIZE; ++j) {
                if (board[i][j] == 0) {
                    board[i][j] = 1;
                    best = min(best, minimax(board, depth + 1, !isMax));
                    board[i][j] = 0;
                }
            }
        }
        return best;
    }
}

pair<int, int> findBestMove(int board[SIZE][SIZE]) {
    int bestVal = -1000;
    pair<int, int> bestMove = {-1, -1};

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (board[i][j] == 0) {
                board[i][j] = -1;
                int moveVal = minimax(board, 0, false);
                board[i][j] = 0;

                if (moveVal > bestVal) {
                    bestMove = {i, j};
                    bestVal = moveVal;
                }
            }
        }
    }

    return bestMove;
}

void printBoard(int board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            if (board[i][j] == -1)
                cout << "X ";
            else if (board[i][j] == 1)
                cout << "O ";
            else
                cout << ". ";
        }
        cout << endl;
    }
}

int main() {
    int board[SIZE][SIZE] = {{-1, 1, 1},
                             {-1, -1, 0},
                             {0, 1, 0}};

    pair<int, int> bestMove = findBestMove(board);

    cout << bestMove.first << " " << bestMove.second << endl;

    return 0;
}
