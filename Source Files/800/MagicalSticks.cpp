#include <iostream>

using namespace std;

class MagicalSticks {

public:

    inline void solve()
    {
        unsigned t;
        cin >> t;

        while (t--) {
            unsigned n;
            cin >> n;
            cout << (n & 1
                     ? (n + 1) / 2
                     : n / 2)
                 << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     MagicalSticks p;
//     p.solve();
//     return 0;
// }
