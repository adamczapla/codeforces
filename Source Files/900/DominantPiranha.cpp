#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class DominantPiranha {

public:

    void solve()
    {
        int t;
        cin >> t;

        while (t--) {
            int n;
            cin >> n;

            vector<int> sizes(n);
            for (int& a : sizes) {
                cin >> a;
            }

            auto pos = max_element(sizes.cbegin(), sizes.cend());
            if (pos == sizes.cbegin()) {
                auto beg = pos + 1;
                while (beg != sizes.cend()) {
                    if (*beg != *pos) break;
                    ++beg;
                }
                cout << (beg != sizes.cend()
                         ? distance(sizes.cbegin(), beg)
                         : -1)
                     << endl;
            } else {
                cout << distance(sizes.cbegin(), pos) + 1 << endl;
            }
        }
    }

};

// int main(int argc, char* argv[])
// {
//     DominantPiranha p;
//     p.solve();
//     return 0;
// }
