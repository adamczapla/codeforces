#include <iostream>

using namespace std;

class ILoveUsername {

public:

    inline void solve()
    {
        unsigned n, amazing = 0;
        cin >> n;

        unsigned min, max;
        cin >> min;
        max = min;

        while (--n) {
            unsigned point;
            cin >> point;
            if (point < min) {
                min = point;
                ++amazing;
            } else if (point > max) {
                max = point;
                ++amazing;
            }
        }

        cout << amazing << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     ILoveUsername p;
//     p.solve();
//     return 0;
// }
