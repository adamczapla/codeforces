#include <iostream>

using namespace std;

class ParkLighting {

public:

    inline void solve()
    {
        int t;
        cin >> t;

        while (t--) {
            int n, m;
            cin >> n >> m;
            int l = n * m / 2;
            cout << (n * m % 2 ? l + 1 : l)
                 << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     ParkLighting p;
//     p.solve();
//     return 0;
// }
