#include <iostream>
#include <algorithm>

using namespace std;

class CollectingCoins {

public:

    inline void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            int a, b, c, n;
            cin >> a >> b >> c >> n;
            int m = max(a, max(b, c));
            n -= 3 * m - (a + b + c);
            cout << (n < 0 || n % 3
                     ? "NO"
                     : "YES")
                 << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     CollectingCoins p;
//     p.solve();
//     return 0;
// }
