#include <iostream>

using namespace std;

class NewYearAndHurry {

public:

    inline void solve()
    {
        int n, k;
        cin >> n >> k;

        int time = 0, cnt = 1;

        while (n--) {
            time += cnt * 5;
            if (time > 240 - k) {
                break;
            }
            ++cnt;
        }

        cout << cnt - 1 << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     NewYearAndHurry p;
//     p.solve();
//     return 0;
// }
