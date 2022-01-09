#include <iostream>

using namespace std;

class Elephant {

public:

    inline void solve()
    {
        unsigned int x;
        cin >> x;

        unsigned int steps = x / 5;
        unsigned int rest = x % 5;
        if (rest) {
            ++steps;
        }

        cout << steps << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     Elephant p;
//     p.solve();
//     return 0;
// }
