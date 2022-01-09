#include <iostream>

using namespace std;

class BearAndBigBrother {

public:

    inline void solve()
    {
        unsigned int a, b, years = 0;

        cin >> a >> b;

        while (a <= b) {
            a *= 3;
            b *= 2;
            ++years;
        }

        cout << years << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     BearAndBigBrother p;
//     p.solve();
//     return 0;
// }
