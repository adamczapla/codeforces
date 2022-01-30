#include <iostream>

using namespace std;

class Test {

public:

    inline void solve()
    {
        cout << "Test" << endl;
    }

};

int main(int argc, char* argv[])
{
    Test p;
    p.solve();
    return 0;
}
