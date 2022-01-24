#include <iostream>

using namespace std;

class DislikeOfThrees {

public:

    inline void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            unsigned int k;
            cin >> k;

            unsigned int i = 1, cnt = 0;
            while (cnt != k) {
                if (i % 3 && i % 10 != 3)
                    ++cnt;
                ++i;
            }
            cout << --i << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     DislikeOfThrees p;
//     p.solve();
//     return 0;
// }
