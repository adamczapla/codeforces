#include <iostream>
#include <algorithm>

using namespace std;

class Expression{

public:

    void solve()
    {
        int a, b, c;
        cin >> a >> b >> c;

        int x = max(a * b * c, a + b + c);
        int y = max(x, a * (b + c));
        cout << max(y, (a + b) * c);
    }

};

// int main(int argc, char* argv[])
// {
//     Expression p;
//     p.solve();
//     return 0;
// }

