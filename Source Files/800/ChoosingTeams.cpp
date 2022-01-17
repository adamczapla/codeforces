#include <iostream>

using namespace std;

class ChoosingTeams {

public:

    inline void solve()
    {
        unsigned int n, k, cnt = 0;
        cin >> n >> k;

        while (n--) {
            unsigned int y;
            cin >> y;
            if (y <= 5 - k)
                ++cnt;
        }

        cout << cnt / 3 << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     ChoosingTeams p;
//     p.solve();
//     return 0;
// }
