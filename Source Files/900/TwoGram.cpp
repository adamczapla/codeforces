#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

class TwoGram {

public:

    inline void solve()
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        map<string, int> m;
        for (int i = 0; i < n - 1; ++i) {
            ++m[s.substr(i, 2)];
        }

        auto max = max_element(m.begin(), m.end(),
        [](const pair<string, int>& p1, const pair<string, int>& p2) {
            return p1.second < p2.second;
        });

        cout << max->first << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     TwoGram p;
//     p.solve();
//     return 0;
// }
