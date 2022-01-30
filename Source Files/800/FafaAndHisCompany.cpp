#include <iostream>

using namespace std;

class FafaAndHisCompany {

public:

    inline void solve()
    {
        int n, cnt = 0;
        cin >> n;
        for (int i = 1; i <= n / 2; ++i) {
            if (n % i == 0)
                ++cnt;
        }
        cout << cnt << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     FafaAndHisCompany p;
//     p.solve();
//     return 0;
// }
