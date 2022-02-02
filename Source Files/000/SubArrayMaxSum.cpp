#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class SubArrayMaxSum {

public:

    inline void solve()
    {
        vector<int> arr {-1, 2, 4, -3, 5, 2, -5, 2};
        int max_sum = 0;
        for (int i = 0; i < arr.size(); ++i) {
            for (int j = i; j < arr.size(); ++j) {
                int sum = 0;
                for (int k = i; k <= j; ++k) {
                    sum += arr[k];
                }
                max_sum = max(max_sum, sum);
            }
        }
        cout << max_sum << endl;
    }

};

int main(int argc, char* argv[])
{
    SubArrayMaxSum p;
    p.solve();
    return 0;
}
