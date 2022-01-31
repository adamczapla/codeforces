#include <iostream>
#include <vector>

using namespace std;

class MaximumInTable {

public:

    inline void solve()
    {
        int n;
        cin >> n;

        vector<vector<int>> table(n, vector<int>(n, 1));

        for (int r = 1; r < n; ++r) {
            for (int c = 1; c < n; ++c) {
                int sum = 0;
                for (int i = 0; i <= c; ++i) {
                    sum += table[r - 1][i];
                }
                table[r][c] = sum;
            }
        }

        cout << table[n - 1][n - 1] << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     MaximumInTable p;
//     p.solve();
//     return 0;
// }
