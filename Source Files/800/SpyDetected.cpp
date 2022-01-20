#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class SpyDetected {

public:

    inline void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            unsigned int n;
            cin >> n;

            vector<unsigned int> vi;
            for (unsigned int i = 0; i != n; ++i) {
                unsigned int a;
                cin >> a;
                vi.push_back(a);
            }

            vector<unsigned int> vs(vi);
            sort(vs.begin(), vs.end());
            unsigned int first = vs[0];
            unsigned int last = vs[n - 1];

            vector<unsigned int>::const_iterator pos;
            if (count(vi.cbegin(), vi.cend(), first) == 1) {
                pos = find(vi.cbegin(), vi.cend(), first);
            } else {
                pos = find(vi.cbegin(), vi.cend(), last);
            }

            cout << distance(vi.cbegin(), pos + 1) << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     SpyDetected p;
//     p.solve();
//     return 0;
// }
