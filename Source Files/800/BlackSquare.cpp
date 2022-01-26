#include <iostream>
#include <vector>

using namespace std;

class BlackSquare {

public:

    inline void solve()
    {
        vector<unsigned> va;
        for (unsigned i = 0; i != 4; ++i) {
            unsigned a;
            cin >> a;
            va.push_back(a);
        }

        string s;
        cin >> s;

        unsigned total = 0;
        for (unsigned i = 0; i != s.length(); ++i) {
            unsigned si = s[i] - '0';
            total += va[si - 1];
        }

        cout << total << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     BlackSquare p;
//     p.solve();
//     return 0;
// }
