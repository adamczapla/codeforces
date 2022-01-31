#include <iostream>
#include <algorithm>

using namespace std;

class FairPlayoff {

public:

    inline void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            unsigned int s1, s2, s3, s4;
            cin >> s1 >> s2 >> s3 >> s4;
            bool isfair = true;
            if (min(s1, s2) > max(s3, s4)
                || min(s3, s4) > max(s1, s2)) {
                isfair = false;
            }
            cout << (isfair ? "YES" : "NO")
                 << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     FairPlayoff p;
//     p.solve();
//     return 0;
// }
