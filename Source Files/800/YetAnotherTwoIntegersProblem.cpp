#include <iostream>
#include <cctype>

using namespace std;

class YetAnotherTwoIntgersProblem {

public:

    inline void solve()
    {
        unsigned t;
        cin >> t;

        while (t--) {
            int a, b;
            cin >> a >> b;
            int m = abs(a - b) / 10;
            cout << (abs(a - b) % 10
                     ? m + 1
                     : m)
                 << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     YetAnotherTwoIntgersProblem p;
//     p.solve();
//     return 0;
// }
