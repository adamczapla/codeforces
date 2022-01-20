#include <iostream>

using namespace std;

class MishkaAndGame {

public:

    inline void solve()
    {
        unsigned int n, m_cnt = 0, c_cnt = 0;

        cin >> n;

        while (n--) {
            unsigned int m, c;
            cin >> m >> c;
            if (m > c)
                ++m_cnt;
            else if (m < c)
                ++c_cnt;
        }

        cout << (c_cnt == m_cnt ? "Friendship is magic!^^"
                 : c_cnt < m_cnt ? "Mishka" : "Chris")
             << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     MishkaAndGame p;
//     p.solve();
//     return 0;
// }
