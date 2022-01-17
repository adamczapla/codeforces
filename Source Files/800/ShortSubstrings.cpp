#include <iostream>
#include <string>

using namespace std;

class ShorSubstrings {

public:

    inline void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            string b;
            cin >> b;
            for (unsigned int i = 0;
                 i != b.length(); ++i) {
                if ((i + 1) % 2) {
                    cout << b.at(i);
                }
            }
            cout << b.at(b.size() - 1)
                 << endl;
        }

    }

};

// int main(int argc, char* argv[])
// {
//     ShorSubstrings p;
//     p.solve();
//     return 0;
// }
