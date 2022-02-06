#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

class CaseOfTheZerosAndOnes {

public:

    inline void solve()
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int one_cnt = count(s.cbegin(), s.cend(), '1');
        int zero_cnt = n - one_cnt;

        cout << abs(one_cnt - zero_cnt);
    }

};

// int main(int argc, char* argv[])
// {
//     CaseOfTheZerosAndOnes p;
//     p.solve();
//     return 0;
// }
