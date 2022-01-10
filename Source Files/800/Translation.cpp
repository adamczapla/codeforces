#include <iostream>

using namespace std;

class Translation {

public:

    inline void solve()
    {
        string s, t;
        cin >> s >> t;

        auto beg = s.begin();
        auto end = s.end() - 1;
        while (beg < end) {
            char c = *beg;
            *beg = *end;
            *end = c;
            ++beg;
            --end;
        }

        cout << (s == t
                 ? "YES"
                 : "NO")
             << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     Translation p;
//     p.solve();
//     return 0;
// }
