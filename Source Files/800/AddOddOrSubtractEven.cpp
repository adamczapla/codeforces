#include <iostream>

using namespace std;

class AddOddOrSubtractEven {

public:

    inline void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            int a, b;
            cin >> a >> b;
            int diff = a - b;
            if (diff > 0) {
                diff = diff % 2 ? 2 : 1;
            } else if (diff < 0) {
                diff = diff % 2 ? 1 : 2;
            }
            cout << diff << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     AddOddOrSubtractEven p;
//     p.solve();
//     return 0;
// }
