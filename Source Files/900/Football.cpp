#include <iostream>
#include <string>

using namespace std;

class Football {

public:

    inline void solve()
    {
        string s;
        cin >> s;

        if (s.length() >= 7) {
            bool is_dangerous = false;
            string d1(7, '1'), d0(7, '0');
            for (int i = 0; i <= s.length() - 7; ++i) {
                string s7 = s.substr(s.length() - i - 7, 7);
                if (s7 == d1 || s7 == d0) {
                    is_dangerous = true;
                    break;
                }
            }
            cout << (is_dangerous ? "YES" : "NO");
        } else {
            cout << "NO";
        }
    }

};

// int main(int argc, char* argv[])
// {
//     Football p;
//     p.solve();
//     return 0;
// }
