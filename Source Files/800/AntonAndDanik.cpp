#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class AntonAndDanik {

public:

    inline void solve()
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int anton_wins = count_if(s.cbegin(), s.cend(), [](const char& c) {
            return c == 'A';
        });

        int danik_wins = n - anton_wins;
        cout << (anton_wins == danik_wins ? "Friendship"
                 : anton_wins > danik_wins ? "Anton" : "Danik")
             << endl;

    }

};

// int main(int argc, char* argv[])
// {
//     AntonAndDanik p;
//     p.solve();
//     return 0;
// }
