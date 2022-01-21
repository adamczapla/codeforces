#include <iostream>

using namespace std;

class CalculatingFunction {

public:

    inline void solve()
    {
        long long n;
        cin >> n;
        if (n % 2) {
            cout << - (n + 1) / 2 << endl;
        } else {
            cout << n / 2 << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     CalculatingFunction p;
//     p.solve();
//     return 0;
// }
