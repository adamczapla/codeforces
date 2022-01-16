#include <iostream>

using namespace std;

class DesignTutorialLearnFromMath {

public:

    inline void solve()
    {
        unsigned int n;
        cin >> n;

        unsigned int x = n / 2, y = x;

        if (n % 2) ++y;

        while (isPrimeNum(x) || isPrimeNum(y)) {
            --x;
            ++y;
        }

        cout << x << " " << y << endl;
    }

    inline bool isPrimeNum(unsigned int p)
    {
        if (p == 0 || p == 1) return false;
        for (unsigned int i = 2; i <= p / 2; ++i) {
            if (p % i == 0) return false;
        }
        return true;
    }

};

// int main(int argc, char* argv[])
// {
//     DesignTutorialLearnFromMath p;
//     p.solve();
//     return 0;
// }
