#include <iostream>
#include <cmath>

using namespace std;

class Candies {

public:

    inline void solve()
    {
        int t;
        cin >> t;

        while (t--) {
            int n, k = 2, m = 1, x = 0;
            cin >> n;
            do {
                m += pow(2, k - 1);
                x = n / m;
                ++k;
            } while (n % m);
            cout << x << endl;
        }

    }

};

// int main(int argc, char* argv[])
// {
//     Candies p;
//     p.solve();
//     return 0;
// }
