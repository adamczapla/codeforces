#include <iostream>

using namespace std;

class VasyaAndSocks {

public:

    inline void solve()
    {
        int n, m;
        cin >> n >> m;

        for (int i = 1; i <= n; ++i) {
            if (i % m == 0) {
                ++n;
            }
        }

        cout << n << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     VasyaAndSocks p;
//     p.solve();
//     return 0;
// }
