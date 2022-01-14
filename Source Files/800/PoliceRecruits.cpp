#include <iostream>
#include <cctype>

using namespace std;

class PoliceRecruits {

public:

    inline void solve()
    {
        int n, total = 0, cnt = 0;

        cin >> n;

        while (n--) {
            int rc;
            cin >> rc;
            total += rc;
            if (total < 0) {
                cnt += abs(total);
                total = 0;
            }
        }

        cout << cnt << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     PoliceRecruits p;
//     p.solve();
//     return 0;
// }
