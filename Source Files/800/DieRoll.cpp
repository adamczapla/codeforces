#include <iostream>
#include <algorithm>

using namespace std;

class DieRoll {

public:

    inline void solve()
    {
        int y, w;
        cin >> y >> w;

        int n = 7 - max(y, w);
        if (6 % n) {
            int g = gcd(n, 6);
            cout << n / g << "/" << 6 / g << endl;
        } else {
            cout << 1 << "/" << (6 / n) << endl;
        }
    }

    inline int gcd(int a, int b)
    {
        int gcd = 1;
        for (int i = 2; i <= min(a, b); ++i) {
            if (a % i == 0 && b % i == 0)
                gcd = i;
        }
        return gcd;
    }


};

// int main(int argc, char* argv[])
// {
//     DieRoll p;
//     p.solve();
//     return 0;
// }
