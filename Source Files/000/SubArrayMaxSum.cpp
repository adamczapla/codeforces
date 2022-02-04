#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class SubArrayMaxSum {

public:

    inline void n1()
    {
        vector<int> arr {-1, 2, 4, -3, 5, 2, -5, 2};
        int best = 0, sum = 0;
        for (int i = 0; i < arr.size(); ++i) {
            sum = max(arr[i], arr[i] + sum);
            best = max(sum, best);
        }
        cout << best << endl;
    }

    inline void n2()
    {
        vector<int> arr {-1, 2, 4, -3, 5, 2, -5, 2};
        int best = 0;
        for (int i = 0; i < arr.size(); ++i) {
            int sum = 0;
            for (int j = i; j < arr.size(); ++j) {
                sum += arr[j];
                best = max(best, sum);
            }
        }
        cout << best << endl;
    }

    inline void n3()
    {
        vector<int> arr {-1, 2, 4, -3, 5, 2, -5, 2};
        int best = 0;
        for (int i = 0; i < arr.size(); ++i) {
            for (int j = i; j < arr.size(); ++j) {
                int sum = 0;
                for (int k = i; k <= j; ++k) {
                    sum += arr[k];
                }
                best = max(best, sum);
            }
        }
        cout << best << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     SubArrayMaxSum p;
//     p.n3();
//     p.n2();
//     p.n1();
//     return 0;
// }
