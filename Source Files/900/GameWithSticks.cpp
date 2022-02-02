#include <iostream>

using namespace std;

class GameWithSticks {

public:

    inline void solve()
    {
        int n, m;
        cin >> n >> m;

        int i = 0;
        for (; n * m; --n, --m, ++i);
        cout << (i % 2 ? "Akshat" : "Malvika");
    }

};

// int main(int argc, char* argv[])
// {
//     GameWithSticks p;
//     p.solve();
//     return 0;
// }
