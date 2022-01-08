#include <iostream>

using namespace std;

class Watermelon {

public:

    inline void solve()
    {
        int w;
        cin >> w;
        if (w % 2 || w == 2) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }

};

int main(int argc, char* argv[])
{
    Watermelon w;
    w.solve();
    return 0;
}
