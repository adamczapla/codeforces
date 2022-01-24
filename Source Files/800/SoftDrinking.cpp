#include <iostream>

using namespace std;

class SoftDrinking {

public:

    inline void solve()
    {
        unsigned int n, k, l, c, d, p, nl, np;
        cin >> n >> k >> l >> c >> d >> p >> nl >> np;
        unsigned int t1 = k * l / nl;
        unsigned int t2 = c * d;
        unsigned int t3 = p / np;
        cout << min(t1, min(t2, t3)) / n << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     SoftDrinking p;
//     p.solve();
//     return 0;
// }
