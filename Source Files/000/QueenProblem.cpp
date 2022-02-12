#include <iostream>
#include <vector>

using namespace std;

class QueenProblem {

public:

    QueenProblem(int n) : N(n)
    {
        chessboard = vector<vector<int>>(N, vector<int>(N, 0));
    }

    void solveQueenProblem(int col)
    {
        if (col == N) {
            printBoard();
        } else {
            for (int row = 0; row < N; ++row) {
                bool isPlaced = isQueenPlaced(row, col, -1, 0);
                if (!isPlaced)
                    isPlaced = isQueenPlaced(row, col, -1, -1);
                if (!isPlaced)
                    isPlaced = isQueenPlaced(row, col, -1, 1);

                if (!isPlaced) {
                    chessboard[row][col] = 1;
                    solveQueenProblem(col + 1);
                    chessboard[row][col] = 0;
                }
            }
        }
    }

    bool isQueenPlaced(int y, int x, int dx, int dy)
    {
        int row = y + dy;
        int col = x + dx;

        bool isPlaced = false;
        while (col >= 0 && col < N
               && row >= 0 && row < N
               && !isPlaced) {
            isPlaced = chessboard[row][col];
            row += dy;
            col += dx;
        }

        return isPlaced;
    }

    void printBoard() const
    {
        static int cnt = 0;
        cout << "\n" << ++cnt << endl;
        for (auto row : chessboard) {
            for (auto col : row) {
                cout << col << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

private:

    int N;
    vector<vector<int>> chessboard;

};

// int main(int argc, char* argv[])
// {
//     QueenProblem p(8);
//     p.solveQueenProblem(0);
//     return 0;
// }
