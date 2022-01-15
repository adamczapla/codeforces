#include <iostream>

using namespace std;

class CandiesAndTwoSisters {

public:

    inline void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            unsigned int n;
            cin >> n;
            int cnt = n / 2;
            cout << (n % 2
                     ? cnt
                     : cnt - 1)
                 << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     CandiesAndTwoSisters p;
//     p.solve();
//     return 0;
// }
