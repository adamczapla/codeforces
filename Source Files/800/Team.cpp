#include <iostream>

using namespace std;

class Team {

public:

    inline void solve()
    {
        unsigned int n = 0, cnt = 0;
        cin >> n;
        while (n--) {
            unsigned int a = 0, b = 0, c = 0, sum = 0;
            cin >> a >> b >> c;
            sum = a + b + c;
            if (sum >= 2) {
                ++cnt;
            }
        }
        cout << cnt << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     Team p;
//     p.solve();
//     return 0;
// }
