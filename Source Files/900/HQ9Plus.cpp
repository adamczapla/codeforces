#include <iostream>
#include <string>

using namespace std;

class HQ9Plus {

public:

    inline void solve()
    {
        string s;
        cin >> s;

        bool has_output = false;
        auto beg = s.cbegin();
        while (beg != s.cend()) {
            if (*beg == 'H' || *beg == 'Q' || *beg == '9') {
                has_output = true;
                break;
            }
            ++beg;
        }

        cout << (has_output ? "YES" : "NO");
    }

};

// int main(int argc, char* argv[])
// {
//     HQ9Plus p;
//     p.solve();
//     return 0;
// }
