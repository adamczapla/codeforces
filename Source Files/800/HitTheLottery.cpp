#include <iostream>
#include <vector>

using namespace std;

class HitTheLottery {

public:

    inline void solve()
    {
        const vector<unsigned> bills = {100, 20, 10, 5, 1};
        unsigned long long n, cnt = 0, pos = 0;

        cin >> n;

        do {
            cnt += n / bills[pos];
        } while ((n %= bills[pos++]) != 0);

        cout << cnt << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     HitTheLottery p;
//     p.solve();
//     return 0;
// }
