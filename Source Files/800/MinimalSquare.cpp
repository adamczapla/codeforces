#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

class MinimalSquare {

public:

    inline void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            unsigned int a, b;
            cin >> a >> b;
            unsigned int max_a2b = max(b, 2 * a);
            unsigned int max_b2a = max(a, 2 * b);
            cout << pow(min(max_a2b, max_b2a), 2)
                 << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     MinimalSquare p;
//     p.solve();
//     return 0;
// }
