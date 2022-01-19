#include <iostream>

using namespace std;

class RequieredRemainder {

public:

    inline void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            unsigned int x, y, n;
            cin >> x >> y >> n;
            unsigned int m, k;
            m = (n - y) / x;
            k = x * m + y;
            cout << k << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     RequieredRemainder p;
//     p.solve();
//     return 0;
// }
