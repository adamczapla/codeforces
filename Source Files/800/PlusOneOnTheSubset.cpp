#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class PlusOneOnTheSubset {

public:

    inline void solve()
    {
        int t;
        cin >> t;

        while (t--) {
            int n;
            cin >> n;

            vector<int> subset;
            for (int i = 0; i != n; ++i) {
                int a;
                cin >> a;
                subset.push_back(a);
            }
            int min = *min_element(subset.cbegin(), subset.cend());
            int max = *max_element(subset.cbegin(), subset.cend());
            cout << max - min << endl;

            // int min = 0, max = 0;
            // for (int i = 0; i != n; ++i) {
            //     int a;
            //     cin >> a;
            //     if (i == 0) {
            //         min = a;
            //         max = a;
            //     } else if (a > max)
            //         max = a;
            //     else if (a < min)
            //         min = a;
            // }
            // cout << max - min << endl;

        }
    }

};

// int main(int argc, char* argv[])
// {
//     PlusOneOnTheSubset p;
//     p.solve();
//     return 0;
// }
