#include <iostream>
#include <cmath>

using namespace std;

/**
 * Every odd number is divisible by an odd number.
 * If dividing an even number by 2, and the quotient results in an odd
 * number, then the even number is also divisible by the odd quotient.
**/

class OddDivisor {

public:

    inline void solve()
    {
        int t;
        cin >> t;

        while (t--) {
            long long n;
            cin >> n;
            while (n % 2 == 0) {
                n /= 2;
            }
            cout << (n == 1 ? "NO" : "YES")
                 << endl;
        }

    }

};

// int main(int argc, char* argv[])
// {
//     OddDivisor p;
//     p.solve();
//     return 0;
// }
