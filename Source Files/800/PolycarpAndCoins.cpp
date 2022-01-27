#include <iostream>

using namespace std;

class PolycarpAndCoins {

public:

    inline void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            unsigned int n;
            cin >> n;

            int c = n / 3, r = n % 3;
            if (r == 0) {
                cout << c << " " << c << endl;
            } else if (r == 1) {
                cout << c + r << " " << c << endl;
            } else {
                cout << c << " " << c + 1 << endl;
            }
        }
    }

};

// int main(int argc, char* argv[])
// {
//     PolycarpAndCoins p;
//     p.solve();
//     return 0;
// }
