#include <iostream>
#include <cmath>

using namespace std;

class BeautifulMatrix {

public:

    inline void solve()
    {
        for (int i = 0; i != 5; ++i) {
            for (int j = 0; j != 5; ++j) {
                unsigned int num;
                cin >> num;
                if (num) {
                    cout << abs(i - 2) + abs(j - 2) << endl;
                    break;
                }
            }
        }
    }

};

int main(int argc, char* argv[])
{
    BeautifulMatrix p;
    p.solve();
    return 0;
}
