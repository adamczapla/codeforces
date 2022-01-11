#include <iostream>
#include <iomanip>

using namespace std;

class Drinks {

public:

    inline void solve()
    {
        unsigned int n;
        cin >> n;

        long double sum = 0.0;
        for (unsigned int i = 0; i != n; ++i) {
            unsigned int p;
            cin >> p;
            sum += p;
        }

        cout << setprecision(14) << sum / n;
    }

};

// int main(int argc, char* argv[])
// {
//     Drinks p;
//     p.solve();
//     return 0;
// }
