#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class HolidayOfEquality {

public:

    inline void solve()
    {
        unsigned int n;
        cin >> n;

        vector<unsigned int> vi;
        while (n--) {
            unsigned int a;
            cin >> a;
            vi.push_back(a);
        }

        unsigned int max = *max_element(vi.cbegin(), vi.cend());
        unsigned int cnt = 0;
        for (auto i : vi) {
            cnt += max - i;
        }

        cout << cnt << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     HolidayOfEquality p;
//     p.solve();
//     return 0;
// }
