#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class FairDivision {

public:

    inline void solve()
    {
        unsigned t;
        cin >> t;

        while (t--) {
            unsigned n;
            cin >> n;

            vector<unsigned> vi;
            for (unsigned i = 0; i != n; ++i) {
                unsigned a;
                cin >> a;
                vi.push_back(a);
            }

            unsigned one = count(vi.cbegin(), vi.cend(), 1);
            unsigned two = count(vi.cbegin(), vi.cend(), 2);

            string out = "NO";
            if (one && two % 2 && one % 2 == 0) {
                out = "YES";
            } else if ((!two || two % 2 == 0) && one % 2 == 0) {
                out = "YES";
            } else if (!one && two % 2 == 0) {
                out = "YES";
            }
            cout << out << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     FairDivision p;
//     p.solve();
//     return 0;
// }
