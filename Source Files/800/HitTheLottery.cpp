#include <iostream>
#include <vector>

using namespace std;

class HitTheLottery {

public:

    inline void solve()
    {
        const vector<unsigned> bills = {100, 20, 10, 5, 1};
        unsigned long long n, counter = 0, pos = 0;
        cin >> n;

        while (n != 0) {
            unsigned long long quotient =  n / bills[pos];
            n = n - (quotient * bills[pos]);
            counter += quotient;
            ++pos;
        }

        cout << counter << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     HitTheLottery p;
//     p.solve();
//     return 0;
// }
