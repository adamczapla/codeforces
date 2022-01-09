#include <iostream>
#include <string>
#include <set>

using namespace std;

class BoyOrGirl {

public:

    inline void solve()
    {
        set<char> unique_chrs;
        string word;

        cin >> word;

        for (char c : word) {
            unique_chrs.insert(c);
        }

        cout << (unique_chrs.size() % 2
                 ? "IGNORE HIM!"
                 : "CHAT WITH HER!");
    }

};

// int main(int argc, char* argv[])
// {
//     BoyOrGirl p;
//     p.solve();
//     return 0;
// }
