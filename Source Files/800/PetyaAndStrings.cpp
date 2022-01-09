#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class PetyaAndStrings {

public:

    inline void solve()
    {
        string str_one, str_two;
        cin >> str_one >> str_two;

        for_each(str_one.begin(), str_one.end(), [](char& c) {
            c = ::tolower(c);
        });

        for_each(str_two.begin(), str_two.end(), [](char& c) {
            c = ::tolower(c);
        });

        cout << (str_one == str_two ? 0 : str_one < str_two ? -1 : 1) << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     PetyaAndStrings p;
//     p.solve();
//     return 0;
// }
