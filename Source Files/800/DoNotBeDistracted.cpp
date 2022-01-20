#include <iostream>
#include <string>

using namespace std;

class DoNotBeDistracted {

public:

    inline void solve()
    {

        unsigned int t;
        cin >> t;

        while (t--) {
            unsigned int n;
            cin >> n;

            string line, letters, out = "YES";
            cin >> line;

            char prev_ch = ' ';
            for (unsigned int i = 0; i != n; ++i) {
                char curr_ch = line[i];
                if (curr_ch != prev_ch) {
                    if (letters.find_first_of(curr_ch) == string::npos) {
                        letters += curr_ch;
                        prev_ch = curr_ch;
                    } else {
                        out = "NO";
                        break;
                    }
                }
            }

            cout << out << endl;
        }

    }
};

// int main(int argc, char* argv[])
// {
//     DoNotBeDistracted p;
//     p.solve();
//     return 0;
// }
