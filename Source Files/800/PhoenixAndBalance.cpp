#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

class PhoenixAndBalance {

public:

    inline void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            unsigned int n;
            cin >> n;

            vector<unsigned int> w;
            for (unsigned int i = 1; i <= n; ++i) {
                w.push_back(pow(2, i));
            }

            auto pos = max_element(w.begin(), w.end());
            int p1 = *pos;
            w.erase(pos);

            pos = max_element(w.begin(), w.end());
            int p2 = *pos;
            w.erase(pos);

            for (int i = 1; w.size() != 0; ++i) {
                auto min = min_element(w.begin(), w.end());
                auto max = max_element(w.begin(), w.end());
                if (i % 2) { // p1
                    if (p1 > p2) {
                        p1 += *min;
                        w.erase(min);
                    } else {
                        p1 += *max;
                        w.erase(max);
                    }
                } else { // p2
                    if (p2 > p1) {
                        p2 += *min;
                        w.erase(min);
                    } else {
                        p2 += *max;
                        w.erase(max);
                    }
                }
            }

            cout << abs(p1 - p2) << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     PhoenixAndBalance p;
//     p.solve();
//     return 0;
// }
