#include <iostream>
#include <vector>

using namespace std;

class BalancedArray {

public:

    inline void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            unsigned int n;
            cin >> n;

            vector<unsigned int> a;
            unsigned int sum_even = 0;
            for (unsigned int i = 2;
                 i <= n; i += 2) {
                a.push_back(i);
                sum_even += i;
            }

            unsigned int sum_odd = 0;
            for (unsigned int i = 1;
                 i <= n; i += 2) {
                a.push_back(i);
                sum_odd += i;
            }

            unsigned int diff = sum_even - sum_odd;
            unsigned int& last = a[a.size() - 1];
            last += diff;
            if (last % 2) {
                cout << "YES" << endl;
                for (auto i : a) {
                    cout << i << " ";
                }
                cout << endl;
            } else {
                cout << "NO" << endl;
            }
        }

    }

};

// int main(int argc, char* argv[])
// {
//     BalancedArray p;
//     p.solve();
//     return 0;
// }
