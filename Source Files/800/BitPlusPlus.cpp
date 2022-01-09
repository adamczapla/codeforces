#include <iostream>
#include <string>

using namespace std;

class BitPlusPlus {

public:

    inline void solve()
    {
        int n, x = 0;
        cin >> n;
        while (n--) {
            string stat;
            cin >> stat;
            if (stat.find("X++") != string::npos ||
                stat.find("++X") != string::npos) {
                ++x;
            } else if (stat.find("X--") != string::npos ||
                       stat.find("--X") != string::npos) {
                --x;
            }
        }
        cout << x << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     BitPlusPlus p;
//     p.solve();
//     return 0;
// }
