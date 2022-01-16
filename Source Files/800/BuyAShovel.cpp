#include <iostream>

using namespace std;

class BuyAShovel {

public:

    inline void solve()
    {
        int n, k, cnt = 0, sum = 0;
        cin >> n >> k;

        do {
            sum += n;
            ++cnt;
        } while (sum % 10 != k
                 && sum % 10 != 0);
        cout << cnt << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     BuyAShovel p;
//     p.solve();
//     return 0;
// }
