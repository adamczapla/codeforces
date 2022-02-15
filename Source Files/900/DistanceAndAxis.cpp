#include <iostream>

using namespace std;

class DistanceAndAxis {

public:

    void solve()
    {
        int t;
        cin >> t;

        while (t--) {
            int n, k;
            cin >> n >> k;

            if (n < k) {
                cout << k - n << endl;
            } else {
                if ((k % 2 == 0 && n % 2 == 0)
                    || (k % 2 && n % 2)) {
                    cout << 0 << endl;
                } else {
                    cout << 1 << endl;
                }
            }
        }
    }

};

// int main(int argc, char* argv[])
// {
//     DistanceAndAxis p;
//     p.solve();
//     return 0;
// }
