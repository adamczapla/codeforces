#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>

using namespace std;

class Twins {

public:

    inline void solve()
    {
        int n;
        cin >> n;

        vector<int> coins;
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            coins.push_back(a);
        }

        sort(coins.rbegin(), coins.rend());

        int curr_sum = 0, cnt = 0;
        auto beg = coins.cbegin();
        while (beg != coins.cend()) {
            curr_sum += *beg;
            int sum = accumulate(++beg, coins.cend(), 0);
            if (curr_sum <= sum)
                ++cnt;
        }

        cout << cnt + 1  << endl;

    }

};

// int main(int argc, char* argv[])
// {
//     Twins p;
//     p.solve();
//     return 0;
// }
