#include <iostream>

using namespace std;

class StoneOnTheTable {

public:

    inline void solve()
    {
        int cnt = 0, n;
        char prev_ch = ' ';

        cin >> n;

        while (n--) {
            char curr_ch;
            cin >> curr_ch;
            if (curr_ch == prev_ch) {
                ++cnt;
            } else {
                prev_ch = curr_ch;
            }
        }

        cout << cnt << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     StoneOnTheTable p;
//     p.solve();
//     return 0;
// }
