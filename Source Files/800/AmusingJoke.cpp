#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class AmusingJoke {

public:

    inline void solve()
    {
        string guest, host, pile, guesthost;
        cin >> guest >> host >> pile;
        guesthost = guest + host;

        if (pile.length() != guesthost.length()) {
            cout << "NO" << endl;
            return;
        }

        for (auto ch : guesthost) {
            string::size_type pos = pile.find_first_of(ch);
            if (pos != string::npos) {
                pile[pos] = '-';
            }
        }

        auto cnt = count(pile.cbegin(), pile.cend(), '-');
        cout << (cnt == guesthost.length() ? "YES" : "NO");
    }

};

// int main(int argc, char* argv[])
// {
//     AmusingJoke p;
//     p.solve();
//     return 0;
// }
