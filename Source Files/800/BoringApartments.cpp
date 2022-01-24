#include <iostream>

using namespace std;

class BoringApartments {

public:

    inline void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            unsigned int x;
            cin >> x;

            // * 10 because 1 + 11 + 111 + 1111 = 10 digits
            unsigned int total = (x % 10 - 1) * 10;
            unsigned int cnt = 0;
            do {
                total += ++cnt;
            } while ((x /= 10) > 0);

            cout << total << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     BoringApartments p;
//     p.solve();
//     return 0;
// }
