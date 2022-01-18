#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class TwoArraysAndSwaps {

public:

    inline void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            unsigned int n, k;
            cin >> n >> k;

            vector<unsigned int> av;
            for (unsigned int i = 0; i != n; ++i) {
                unsigned int a;
                cin >> a;
                av.push_back(a);
            }
            sort(av.begin(), av.end());

            vector<unsigned int> bv;
            for (unsigned int i = 0; i != n; ++i) {
                unsigned int b;
                cin >> b;
                bv.push_back(b);
            }
            sort(bv.rbegin(), bv.rend());

            for (unsigned int i = 0; i != k; ++i) {
                if (av[i] < bv[i]) {
                    swap(av[i], bv[i]);
                }
            }

            cout << accumulate(av.begin(), av.end(), 0)
                 << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     TwoArraysAndSwaps p;
//     p.solve();
//     return 0;
// }
