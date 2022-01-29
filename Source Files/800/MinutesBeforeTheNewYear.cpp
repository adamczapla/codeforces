#include <iostream>

using namespace std;

class MinutesBeforeTheNewYear {

public:

    inline void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            unsigned int h, m;
            cin >> h >> m;
            cout << 60 * (23 - h) + (60 - m) << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     MinutesBeforeTheNewYear p;
//     p.solve();
//     return 0;
// }
