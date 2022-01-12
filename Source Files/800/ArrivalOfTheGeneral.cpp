#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class ArrivalOfTheGeneral {

public:

    inline void solve()
    {
        unsigned int n;
        cin >> n;

        vector<unsigned int> heights;
        while (n--) {
            unsigned int a;
            cin >> a;
            heights.push_back(a);
        }

        unsigned int min = *min_element(heights.cbegin(), heights.cend());
        unsigned int max = *max_element(heights.cbegin(), heights.cend());

        auto pos_max = find_if(heights.begin(), heights.end(), [max](unsigned int i) {
            return i == max;
        });

        unsigned int swap_cnt = 0;

        while (pos_max != heights.begin()) {
            swap(*pos_max, *(pos_max - 1));
            --pos_max;
            ++swap_cnt;
        }

        auto pos_min = find_if(heights.rbegin(), heights.rend(), [min](unsigned int i) {
            return i == min;
        });

        while (pos_min != heights.rbegin()) {
            swap(*pos_min, *(pos_min - 1));
            --pos_min;
            ++swap_cnt;
        }

        cout << swap_cnt << endl;

    }

};

int main(int argc, char* argv[])
{
    ArrivalOfTheGeneral p;
    p.solve();
    return 0;
}
