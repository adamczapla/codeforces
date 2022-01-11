#include <iostream>
#include <string>

using namespace std;

class Magnets {

public:

    inline void solve()
    {
        unsigned int n, group_cnt = 0;
        cin >> n;

        string prev_magnet;
        while (n--) {
            string curr_magnet;
            cin >> curr_magnet;
            if (curr_magnet != prev_magnet) {
                ++group_cnt;
                prev_magnet = curr_magnet;
            }
        }

        cout << group_cnt << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     Magnets p;
//     p.solve();
//     return 0;
// }
