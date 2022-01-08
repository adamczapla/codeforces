#include <iostream>

using namespace std;

class DominoPilling {

public:

    inline void solve()
    {
        unsigned int m, n;
        cin >> m >> n;
        unsigned int max_num = m * n / 2;
        cout << max_num << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     DominoPilling p;
//     p.solve();
//     return 0;
// }
