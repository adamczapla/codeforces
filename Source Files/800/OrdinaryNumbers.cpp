#include <iostream>
#include <cmath>

using namespace std;

class OrdinaryNumbers {

public:

    inline void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            unsigned int n;
            cin >> n;

            unsigned int cnt = 0, m = 0;
            for (int i = n; i /= 10; ++cnt);
            for (int i = 0; i <= cnt; ++i)
                m += pow(10, i);

            cout << (n <= 9 ? n : n / m + (cnt * 9))
                 << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     OrdinaryNumbers p;
//     p.solve();
//     return 0;
// }
