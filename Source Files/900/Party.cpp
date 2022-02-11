#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

class Party {

public:

    inline void counter(map<int, vector<int>>& m, int n, int& cnt, int& max_cnt)
    {
        auto iter = m.find(n);
        if (iter == m.end()) {
            max_cnt = max(max_cnt, cnt);
        } else {
            vector<int> vi = iter->second;
            for (int i = 0; i != vi.size(); ++i) {
                counter(m, vi[i], ++cnt, max_cnt);
                --cnt;
            }
        }
    }

    inline void solve()
    {
        int n;
        cin >> n;

        map<int, vector<int>> tree;
        for (int i = 1; i <= n; ++i) {
            int p;
            cin >> p;
            if (p != -1) {
                tree[p].push_back(i);
            }
        }

        int cnt = 1, max_cnt = 0;
        for (auto n : tree) {
            for (auto i : n.second) {
                counter(tree, i, cnt, max_cnt);
            }
        }

        cout << max_cnt + 1 << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     Party p;
//     p.solve();
//     return 0;
// }
