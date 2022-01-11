#include <iostream>

using namespace std;

class Hulk {

public:

    inline void solve()
    {
        unsigned int n;
        cin >> n;

        for (unsigned int i = 1; i <= n; ++i) {
            cout << (i % 2 ? "I hate" : "I love");
            cout << (i == n ? " it" : " that ");
        }
    }

};

// int main(int argc, char* argv[])
// {
//     Hulk p;
//     p.solve();
//     return 0;
// }
