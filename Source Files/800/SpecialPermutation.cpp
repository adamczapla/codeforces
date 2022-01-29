#include <iostream>

using namespace std;

class SpecialPermutation {

public:

    inline void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            unsigned int n;
            cin >> n;
            for (int i = 2; i <= n; ++i) {
                cout << i << " ";
            }
            cout << 1 << endl;
        }

    }

};

// int main(int argc, char* argv[])
// {
//     SpecialPermutation p;
//     p.solve();
//     return 0;
// }
