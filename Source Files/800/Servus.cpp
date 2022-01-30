#include <iostream>

using namespace std;

class Servus {

public:

    inline void solve()
    {
        cout << "hello" << endl;
    }

};

int main(int argc, char* argv[])
{
    Servus p;
    p.solve();
    return 0;
}
