#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class BusinessTrip {

public:

    inline void solve()
    {
        int k;
        cin >> k;

        vector<int> growth(k);
        for (int& a : growth) {
            cin >> a;
        }

        sort(growth.rbegin(), growth.rend());

        int sum = 0, cnt = 0;
        auto beg = growth.cbegin();
        while (sum < k && beg != growth.cend()) {
            sum += *beg++;
            ++cnt;
        }

        cout << (sum == k && cnt == 12 ? 12 : cnt < 12 ? cnt : -1);
    }

};

// int main(int argc, char* argv[])
// {
//     BusinessTrip p;
//     p.solve();
//     return 0;
// }
