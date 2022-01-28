#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class RestoreThePermutationByMerger {

public:

    inline void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            unsigned int n;
            cin >> n;

            vector<unsigned int> p;
            for (unsigned int i = 0; i != n * 2; ++i) {
                unsigned int a;
                cin >> a;
                if (find(p.cbegin(), p.cend(), a) == p.cend())
                    p.push_back(a);
            }

            for (auto i : p)
                cout << i << " ";
        }
    }

};

// int main(int argc, char* argv[])
// {
//     RestoreThePermutationByMerger p;
//     p.solve();
//     return 0;
// }
