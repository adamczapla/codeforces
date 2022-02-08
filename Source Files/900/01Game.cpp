#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

class Game01 {

public:

    inline void solve()
    {
        int t;
        cin >> t;

        while (t--) {
            string s;
            cin >> s;

            int cnt0 = count(s.cbegin(), s.cend(), '0');
            int cnt1 = s.length() - cnt0;

            if (cnt0 == 0 || cnt1 == 0) {
                cout << "NET" << endl;
            } else if (cnt0 == cnt1) {
                cout << (cnt0 % 2 ? "DA" : "NET") << endl;
            } else {
                int diff = s.length() - abs(cnt0 - cnt1);
                cout << (diff / 2 % 2 ? "DA" : "NET") << endl;
            }
        }

    }

};

// int main(int argc, char* argv[])
// {
//     Game01 p;
//     p.solve();
//     return 0;
// }
