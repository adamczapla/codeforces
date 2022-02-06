#include <iostream>

using namespace std;

class KanaAndDragonQuestGame {

public:

    inline void solve()
    {
        int t;
        cin >> t;

        while (t--) {
            int x, n, m;
            cin >> x >> n >> m;

            while (n > 0 && x > x / 2 + 10 && x / 2 + 10 > 10) {
                x = x / 2 + 10;
                --n;
            }

            while (m > 0 && x > 0) {
                x -= 10;
                --m;
            }

            cout << (x > 0 ? "NO" : "YES")
                 << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     KanaAndDragonQuestGame p;
//     p.solve();
//     return 0;
// }
