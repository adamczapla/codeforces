#include <iostream>

using namespace std;

class EvenOdds {

public:

    inline void solve()
    {
        long long n, k;
        cin >> n >> k;

        long long h = n / 2;
        if (n % 2) ++h;

        cout << (k <= h
                 ? k * 2 - 1
                 : (k - h) * 2)
             << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     EvenOdds p;
//     p.solve();
//     return 0;
// }
