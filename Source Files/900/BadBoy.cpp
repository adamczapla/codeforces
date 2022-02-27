#include <iostream>

using namespace std;

class BadBoy {

public:

    void solve()
    {
        int t;
        cin >> t;

        while (t--) {
            int n, m, i, j;
            cin >> n >> m >> i >> j;

            if (i <= n / 2) {
                if (j <= m / 2) {
                    cout << n << " " << m << " "
                         << 1 << " " << 1 << endl;
                } else {
                    cout << n << " " << 1 << " "
                         << 1 << " " << m << endl;
                }
            } else {
                if (j <= m / 2) {
                    cout << 1 << " " << m << " "
                         << n << " " << 1 << endl;
                } else {
                    cout << 1 << " " << 1 << " "
                         << n << " " << m << endl;
                }
            }
        }
    }

};

// int main(int argc, char* argv[])
// {
//     BadBoy p;
//     p.solve();
//     return 0;
// }
