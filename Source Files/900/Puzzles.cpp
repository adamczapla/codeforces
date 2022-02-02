#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Puzzles {

public:

    inline void solve()
    {
        int n, m;
        cin >> n >> m;

        vector<int> p;
        while (m--) {
            int f;
            cin >> f;
            p.push_back(f);
        }

        sort(p.begin(), p.end());

        int diff = 0;
        auto beg = p.begin();
        while (distance(beg, p.end()) >= n) {
            auto min = *min_element(beg, beg + n);
            auto max = *max_element(beg, beg + n);
            if (max - min < diff
                || distance(p.begin(), beg) == 0)
                diff = max - min;
            ++beg;
        }

        cout << diff << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     Puzzles p;
//     p.solve();
//     return 0;
// }
