#include <iostream>

using namespace std;

class VanyaAndCubes {

public:

    inline void solve()
    {
        int n;
        cin >> n;

        int i = 0, j = 0, h = 1;
        while (j <= n) {
            i += h++;
            j += i;
        }
        cout << h - 2 << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     VanyaAndCubes p;
//     p.solve();
//     return 0;
// }
