#include <iostream>

using namespace std;

class NastyaAndRice {

public:

    inline void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            int n, a, b, c, d;
            cin >> n >> a >> b >> c >> d;

            if (((a - b) * n <= c + d)
                && ((a + b) * n >= c - d)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }

};

// int main(int argc, char* argv[])
// {
//     NastyaAndRice p;
//     p.solve();
//     return 0;
// }
