#include <iostream>

using namespace std;

class MagicNumbers {

public:

    void solve()
    {
        int n;
        cin >> n;

        bool ismagic = true;

        int cnt = 0;
        while (n > 0) {
            int r = n % 10;

            if (r != 1 && r != 4) {
                ismagic = false;
                break;
            }

            if (r == 4) {
                if (cnt == 2) {
                    ismagic = false;
                    break;
                }
                ++cnt;
            } else {
                cnt = 0;
            }

            n /= 10;
        }

        cout << (ismagic && cnt == 0 ? "YES" : "NO");
    }

};

// int main(int argc, char* argv[])
// {
//     MagicNumbers p;
//     p.solve();
//     return 0;
// }
