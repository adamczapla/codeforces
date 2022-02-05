#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Sale {

public:

    inline void solve()
    {
        int n, m;
        cin >> n >> m;

        vector<int> prices;
        while (n--) {
            int a;
            cin >> a;
            prices.push_back(a);
        }

        sort(prices.begin(), prices.end());

        int sum = 0;
        for (auto i = prices.cbegin();
             i != prices.cend(); ++i) {
            if (*i < 0 && m-- > 0)
                sum -= *i;
        }

        cout << sum << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     Sale p;
//     p.solve();
//     return 0;
// }
