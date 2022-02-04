#include <iostream>

using namespace std;

class IlyaAndBankAccount {

public:

    inline void solve()
    {
        int n;
        cin >> n;

        if (n < 0) {
            int last = n % 10, last_q = n / 10;
            int before_last = last_q % 10;
            int before_last_q = last_q / 10;
            cout << (last < before_last
                     ? before_last_q * 10 + before_last
                     : before_last_q * 10 + last)
                 << endl;
        } else {
            cout << n << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     IlyaAndBankAccount p;
//     p.solve();
//     return 0;
// }
