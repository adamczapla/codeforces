#include <iostream>
#include <string>

using namespace std;

class FoxAndSnake {

public:

    inline void solve()
    {
        unsigned n, m;
        cin >> n >> m;

        string odd_row(m, '#');

        for (unsigned r = 1; r <= n; ++r) {
            if (r % 2) {
                cout << odd_row << endl;
            } else {
                string even_row(m, '.');
                if ((r / 2) % 2) {
                    even_row[m - 1] = '#';
                } else {
                    even_row[0] = '#';
                }
                cout << even_row << endl;
            }
        }

    }

};

// int main(int argc, char* argv[])
// {
//     FoxAndSnake p;
//     p.solve();
//     return 0;
// }
