#include <iostream>

using namespace std;

class FoodBuying {

public:

    inline void solve()
    {
        int t;
        cin >> t;

        while (t--) {
            int s;
            cin >> s;

            int max = 0;
            while (s > 0) {
                int b = getMaxBurlsToSpend(s);
                max += b;
                s = s - b + b / 10;
            }

            cout << max << endl;
        }
    }

    int getMaxBurlsToSpend(int burls)
    {
        int b = burls, d = 10;
        while ((b /= 10) >= 10) {
            d *= 10;
        }
        return (b == 0 ? burls : d * b);
    }

};

// int main(int argc, char* argv[])
// {
//     FoodBuying p;
//     p.solve();
//     return 0;
// }
