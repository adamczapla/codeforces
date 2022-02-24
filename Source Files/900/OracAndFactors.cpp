#include <iostream>

using namespace std;

class OracAndFactors {

public:

    void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            int n, k;
            cin >> n >> k;

            if (n % 2) {
                n += scd(n);
                --k;
            }

            cout << 2 * k + n << endl;
        }
    }

    int scd(int n)
    {
        int scd = 2;
        for (; scd <= n; ++scd) {
            if (n % scd == 0) break;
        }
        return scd;
    }

};

// int main(int argc, char* argv[])
// {
//     OracAndFactors p;
//     p.solve();
//     return 0;
// }
