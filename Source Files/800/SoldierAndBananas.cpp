#include <iostream>

using namespace std;

class SoldierAndBananas {

public:

    inline void solve()
    {
        int k, n, w;
        cin >> k >> n >> w;

        int total = 0;
        do {
            total += w * k;
        } while (--w);

        int borrow = total - n;
        cout << (borrow < 0 ? 0 : borrow);
    }

};

// int main(int argc, char* argv[])
// {
//     SoldierAndBananas p;
//     p.solve();
//     return 0;
// }
