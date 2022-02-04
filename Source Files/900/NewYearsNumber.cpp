#include <iostream>

using namespace std;

class NewYearsNumber {

public:

    inline void solve()
    {
        int t;
        cin >> t;

        while (t--) {
            int n;
            cin >> n;
            int q = n / 2020;
            int r = n % 2020;
            if (r <= q) {
                if (((q - r) * 2020 + r * 2021) == n)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

};

// int main(int argc, char* argv[])
// {
//     NewYearsNumber p;
//     p.solve();
//     return 0;
// }
