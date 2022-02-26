#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class YetAnotherTetrisProblem {

public:

    void solve()
    {
        int t;
        cin >> t;

        while (t--) {
            int n;
            cin >> n;

            int a;
            cin >> a;

            bool flag = a & 1;
            bool is_clear = true;

            for (int i = 1; i < n; ++i) {
                cin >> a;
                if ((a & 1) != flag) {
                    is_clear = false;
                }
            }

            cout << (is_clear ? "YES" : "NO")
                 << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     YetAnotherTetrisProblem p;
//     p.solve();
//     return 0;
// }
