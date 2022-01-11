#include <iostream>

using namespace std;

class GeorgeAndAccommodation {

public:

    inline void solve()
    {
        unsigned int n, cnt = 0;
        cin >> n;

        while (n--) {
            int p, q;
            cin >> p >> q;
            if (q - p >= 2) {
                ++cnt;
            }
        }

        cout << cnt << endl;

    }

};

// int main(int argc, char* argv[])
// {
//     GeorgeAndAccommodation p;
//     p.solve();
//     return 0;
// }
