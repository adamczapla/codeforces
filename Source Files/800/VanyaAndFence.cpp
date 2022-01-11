#include <iostream>

using namespace std;

class VanyaAndFence {

public:

    inline void solve()
    {
        unsigned int n, h, w = 0;
        cin >> n >> h;

        while (n--) {
            unsigned int a;
            cin >> a;
            if (a > h) {
                w += 2;
            } else {
                ++w;
            }
        }

        cout << w << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     VanyaAndFence p;
//     p.solve();
//     return 0;
// }
