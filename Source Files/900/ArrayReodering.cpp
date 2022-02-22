#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class ArrayReodering {

public:

    void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            int n;
            cin >> n;

            vector<int> vi;
            while (n--) {
                int a;
                cin >> a;
                vi.push_back(a);
            }

            sort(vi.begin(), vi.end(), [](int a, int b) {
                return (a & 1) < (b & 1);
            });

            int cnt = 0;
            for (auto i = vi.cbegin(); i != vi.cend(); ++i) {
                for (auto j = i + 1; j != vi.cend(); ++j) {
                    cnt += gcd(*i, *j * 2) > 1;
                }
            }

            cout << cnt << endl;
        }
    }

    int gcd(int a, int b)
    {
        if (!b) return a;
        return gcd(b, a % b);
    }

};

// int main(int argc, char* argv[])
// {
//     ArrayReodering p;
//     p.solve();
//     return 0;
// }
