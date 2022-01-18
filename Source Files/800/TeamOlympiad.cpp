#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

class TeamOlympiad {

public:

    inline void solve()
    {
        unsigned int n;
        cin >> n;

        map<unsigned int, vector<unsigned int>> m;
        for (unsigned int i = 1; i <= n; ++i) {
            unsigned int t;
            cin >> t;
            m[t].push_back(i);
        }

        if (m.size() != 3) {
            cout << 0 << endl;
        } else {
            set<unsigned int> sz;
            sz.insert(m[1].size());
            sz.insert(m[2].size());
            sz.insert(m[3].size());
            unsigned int min = *sz.begin();
            cout << min << endl;
            for (unsigned int i = 0; i < min; ++i) {
                cout << m[1].at(i) << " "
                     << m[2].at(i) << " "
                     << m[3].at(i) << " "
                     << endl;
            }
        }
    }

};

// int main(int argc, char* argv[])
// {
//     TeamOlympiad p;
//     p.solve();
//     return 0;
// }
