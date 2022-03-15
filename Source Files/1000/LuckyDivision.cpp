#include <iostream>
#include <vector>

using namespace std;

class LuckyDivision {

public:

    void solve()
    {
        const vector<int> lucky_nums {4, 7, 44, 47, 74, 77, 444, 447, 474, 477};

        int n;
        cin >> n;

        bool is_almost_lucky_num = false;
        for (auto ln : lucky_nums) {
            if (n % ln == 0) {
                is_almost_lucky_num = true;
                break;
            }
        }
        cout << (is_almost_lucky_num 
            ? "YES" 
            : "NO");
    }

};

/* int main(int argc, char* argv[]) */
/* { */
/*     LuckyDivision p; */
/*     p.solve(); */
/*     return 0; */
/* } */

