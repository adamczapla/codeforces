#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

class Word {

public:

    inline void solve()
    {
        string str;
        cin >> str;

        int lcase_cnt = count_if(str.cbegin(), str.cend(), [](const char& c) {
            return islower(c);
        });

        int ucase_cnt = str.length() - lcase_cnt;

        if (ucase_cnt > lcase_cnt) {
            transform(str.begin(), str.end(), str.begin(), ::toupper);
        } else {
            transform(str.begin(), str.end(), str.begin(), ::tolower);
        }

        cout << str << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     Word p;
//     p.solve();
//     return 0;
// }
