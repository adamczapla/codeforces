#include <iostream>
#include <vector>

using namespace std;

class EvenArray {

public:

    inline void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            unsigned int n;
            cin >> n;

            vector<unsigned int> vm;
            for (unsigned int i = 0; i < n; ++i) {
                unsigned int a;
                cin >> a;
                vm.push_back(a);
            }

            int even_cnt = 0, odd_cnt = 0;
            for (unsigned int i = 0; i < n; ++i) {
                if (i % 2 != vm[i] % 2) {
                    if (i % 2) {
                        ++odd_cnt;
                    } else {
                        ++even_cnt;
                    }
                }
            }

            cout << (even_cnt == odd_cnt ? even_cnt : -1)
                 << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     EvenArray p;
//     p.solve();
//     return 0;
// }
