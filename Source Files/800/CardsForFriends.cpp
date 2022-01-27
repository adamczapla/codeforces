#include <iostream>

using namespace std;

class CardsForFriends {

public:

    inline void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            unsigned int w, h, n;
            cin >> w >> h >> n;

            unsigned int p = 1;
            while (w % 2 == 0) {
                w /= 2;
                p *= 2;
            }

            while (h % 2 == 0) {
                h /= 2;
                p *= 2;
            }

            cout << (p >= n ? "YES" : "NO")
                 << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     CardsForFriends p;
//     p.solve();
//     return 0;
// }
