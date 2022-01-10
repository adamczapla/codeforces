#include <iostream>

using namespace std;

class Tram {

public:

    inline void solve()
    {
        int n, curr_max = 0, prev_max = 0;
        cin >> n;
        while (n--) {
            int a, b;
            cin >> a >> b;
            curr_max = b - a + curr_max;
            if (curr_max > prev_max) {
                prev_max = curr_max;
            }
        }
        cout << prev_max << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     Tram p;
//     p.solve();
//     return 0;
// }
