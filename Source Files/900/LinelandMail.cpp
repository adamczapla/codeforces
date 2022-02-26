#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class LinelandMail {

public:

    void solve()
    {
        int n;
        cin >> n;

        vector<int> c(n);
        for (int& x : c) {
            cin >> x;
        }

        for (int i = 0; i < n; ++i) {
            if (!i) {
                cout << abs(c[i] - c[i + 1]) << " "
                     << abs(c[i] - c[n - 1]) << endl;
            } else if (i == n - 1) {
                cout << abs(c[i] - c[i - 1]) << " "
                     << abs(c[i] - c[0]) << endl;
            } else {
                cout << min(abs(c[i] - c[i - 1]), abs(c[i] - c[i + 1])) << " "
                     << max(abs(c[i] - c[0]), abs(c[i] - c[n - 1])) << endl;
            }
        }

    }

};

// int main(int argc, char* argv[])
// {
//     LinelandMail p;
//     p.solve();
//     return 0;
// }
