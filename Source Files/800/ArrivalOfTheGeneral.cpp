#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class ArrivalOfTheGeneral {

public:

    inline void solve()
    {
        vector<unsigned int> heights;
        unsigned int n, swap_cnt = 0;

        cin >> n;

        while (n--) {
            unsigned int a;
            cin >> a;
            heights.push_back(a);
        }

        auto pos_max = max_element(heights.begin(), heights.end());

        while (pos_max != heights.begin()) {
            swap(*pos_max, *(pos_max - 1));
            --pos_max;
            ++swap_cnt;
        }

        auto pos_min = min_element(heights.rbegin(), heights.rend());

        while (pos_min != heights.rbegin()) {
            swap(*pos_min, *(pos_min - 1));
            --pos_min;
            ++swap_cnt;
        }

        cout << swap_cnt << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     ArrivalOfTheGeneral p;
//     p.solve();
//     return 0;
// }
