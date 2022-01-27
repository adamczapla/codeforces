#include <iostream>

using namespace std;

class MostUnstableArray {

public:

    inline void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            int n, m;
            cin >> n >> m;
            cout << min(2, n - 1) * m
                 << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     MostUnstableArray p;
//     p.solve();
//     return 0;
// }
