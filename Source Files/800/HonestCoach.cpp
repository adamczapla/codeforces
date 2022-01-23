#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class HonestCoach {

public:

    inline void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            unsigned int n;
            cin >> n;

            vector<unsigned int> vs;
            for (unsigned int i = 0; i != n; ++i) {
                unsigned int s;
                cin >> s;
                vs.push_back(s);
            }

            sort(vs.begin(), vs.end());
            vector<unsigned int> vd;
            for (unsigned int i = 1; i != n; ++i) {
                vd.push_back(vs[i] - vs[i - 1]);
            }

            auto pos = min_element(vd.crbegin(), vd.crend());
            unsigned int min_diff_max_s = distance(pos, vd.crend());
            cout << vs[min_diff_max_s] - vs[min_diff_max_s - 1] << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     HonestCoach p;
//     p.solve();
//     return 0;
// }
