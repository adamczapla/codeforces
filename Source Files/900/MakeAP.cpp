#include <iostream>

using namespace std;

class MakeAP {

public:

    void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            int a, b, c;
            cin >> a >> b >> c;

            int c_ = a + 2 * (b - a); // [a, b]; b = a + d; c = b + d => c = a + 2 * d; d = b - a;
            int a_ = 2 * b - c; // [b, c]; a = b - d; d = c - b; c = b - (c - b);
            int b_ = a + (c - a) / 2; // [a, c]; b = a + d; 2 * d = c - a; d = (c - a) / 2;

            bool exists = false;

            if (c_ > 0 && c_ % c == 0) {
                exists = true;
            } else if (a_ > 0 && a_ % a == 0) {
                exists = true;
            } else if (b_ > 0 && (c - a) % 2 == 0 && b_ % b == 0) {
                exists = true;
            }

            // if (c_ >= c && c_ != 0 && c_ % c == 0) {
            //     exists = true;
            // } else if (a_ >= a && a_ != 0 && a_ % a == 0) {
            //     exists = true;
            // } else if (b_ >= b && b_ != 0 && (c - a) % 2 == 0 && b_ % b == 0) {
            //     exists = true;
            // }

            cout << (exists ? "YES" : "NO") << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     MakeAP p;
//     p.solve();
//     return 0;
// }
