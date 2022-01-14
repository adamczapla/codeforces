#include <iostream>
#include <cctype>

using namespace std;

class VasyaTheHipster {

public:

    inline void solve()
    {
        unsigned int a, b;
        cin >> a >> b;

        unsigned int min = std::min(a, b);
        unsigned int max = std::max(a, b);

        cout << min << " " << (max - min) / 2;
    }

};

// int main(int argc, char* argv[])
// {
//     VasyaTheHipster p;
//     p.solve();
//     return 0;
// }
