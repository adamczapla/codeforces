#include <iostream>

using namespace std;

class Test {
public:
    void solve() 
    {
       cout << "hello" << endl;
    } 
};

int main(int argc, char** argv)
{
    Test t;
    t.solve();
    return 0;
}