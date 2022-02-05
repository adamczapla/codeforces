#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class ConstructTheString {

public:

    inline void solve()
    {
        int t;
        cin >> t;

        while (t--) {
            int n, a, b;
            cin >> n >> a >> b;

            string str;
            for (int i = 0; i < a; ++i) {
                if (i < b - 1)
                    str += i + 'a';
                else
                    str += b - 1 + 'a';
            }

            string r = str.substr(0, b);
            for (int i = a, j = 0; i < n; ++i, ++j) {
                if (j >= r.length()) j = 0;
                str += r[j];
            }

            cout << str << endl;
        }


    }

};

// int main(int argc, char* argv[])
// {
//     ConstructTheString p;
//     p.solve();
//     return 0;
// }
