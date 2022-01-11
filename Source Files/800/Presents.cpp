#include <iostream>
#include <map>
#include <string>

using namespace std;

class Presents {

public:

    inline void solve()
    {
        map<unsigned int, unsigned int> fg;
        unsigned int n;
        cin >> n;

        for (unsigned int i = 1; i <= n; ++i) {
            unsigned int p;
            cin >> p;
            fg[p] = i;
        }

        for (auto p : fg) {
            cout << to_string(p.second) << " ";
        }
    }

};

// int main(int argc, char* argv[])
// {
//     Presents p;
//     p.solve();
//     return 0;
// }
