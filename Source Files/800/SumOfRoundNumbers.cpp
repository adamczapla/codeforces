#include <iostream>
#include <string>

using namespace std;

class SumOfRoundNumbers {

public:

    inline void solve()
    {
        int t;
        cin >> t;

        while (t--) {
            int n, sz = 0, cnt = 0;
            cin >> n;
            string out;
            while ((sz = size(n)) >= 1) {
                int k = n / sz;
                out += to_string(k * sz) + " ";
                n %= sz;
                ++cnt;
            }
            cout << cnt << endl;
            cout << out << endl;
        }
    }

    inline int size(int n)
    {
        if (!n) return 0;

        int d = 1;
        while ((n /= 10) != 0) {
            d *= 10;
        }
        return d;
    }

};

// int main(int argc, char* argv[])
// {
//     SumOfRoundNumbers p;
//     p.solve();
//     return 0;
// }
