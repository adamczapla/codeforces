#include <iostream>

using namespace std;

class KefaAndFirstSteps {

public:

    inline void solve()
    {
        int n;
        cin >> n;

        int max = 0, cnt = 0, prev = 0;
        while (n--) {
            int a;
            cin >> a;
            if (a >= prev) {
                ++cnt;
            } else {
                if (cnt > max)
                    max = cnt;
                cnt = 1;
            }
            prev = a;
        }

        cout << (max < cnt ? cnt : max);
    }

};

// int main(int argc, char* argv[])
// {
//     KefaAndFirstSteps p;
//     p.solve();
//     return 0;
// }
