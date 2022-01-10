#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class NearlyLuckyNumber {

public:

    inline void solve()
    {
        string number;
        cin >> number;

        int cnt = count_if(number.cbegin(), number.cend(), [](const char& c) {
            return c == '4' || c == '7';
        });

        cout << (cnt == 4 || cnt == 7 ? "YES" : "NO") << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     NearlyLuckyNumber p;
//     p.solve();
//     return 0;
// }
