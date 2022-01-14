#include <iostream>
#include <set>
#include <vector>
#include <string>

using namespace std;

class RemoveSmallest {

public:

    inline void solve()
    {
        set<unsigned int> s;
        unsigned int t;
        cin >> t;

        while (t--) {
            unsigned int n;
            cin >> n;

            while (n--) {
                unsigned int a;
                cin >> a;
                s.insert(a);
            }

            if (s.size() == 1) {
                cout << "YES" << endl;
            } else {
                vector<unsigned int> v(s.begin(), s.end());
                string out = "YES";
                for (auto i = v.begin(); i != v.end() - 1; ++i) {
                    if ((*(i + 1) - *i) > 1) {
                        out = "NO";
                        break;
                    }
                }
                cout << out << endl;
            }
            s.clear();
        }
    }

};

// int main(int argc, char* argv[])
// {
//     RemoveSmallest p;
//     p.solve();
//     return 0;
// }
