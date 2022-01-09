#include <iostream>

using namespace std;

class WrongSubtraction {

public:

    inline void solve()
    {
        unsigned int n, k;
        cin >> n >> k;

        while (k--) {
            if (n % 10) {
                --n;
            } else {
                n /= 10;
            }
        }

        cout << n << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     WrongSubtraction p;
//     p.solve();
//     return 0;
// }
