#include <iostream>

using namespace std;

class FashionabLee {

public:

    inline void solve()
    {
        int t;
        cin >> t;

        while (t--) {
            int n;
            cin >> n;
            cout << (n % 4 ? "NO" : "YES")
                 << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     FashionabLee p;
//     p.solve();
//     return 0;
// }
