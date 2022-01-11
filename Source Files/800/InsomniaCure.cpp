#include <iostream>
#include <set>

using namespace std;

class InsomniaCure {

public:

    inline void solve()
    {
        long long k, l, m, n, d;
        cin >> k >> l >> m >> n >> d;

        if (k == 1 || l == 1 || m == 1 || n == 1) {

            cout << d << endl;

        } else {

            set<long long> damaged;

            for (long long i = k; i <= d; i += k) {
                damaged.insert(i);
            }

            for (long long i = l; i <= d; i += l) {
                damaged.insert(i);
            }

            for (long long i = m; i <= d; i += m) {
                damaged.insert(i);
            }

            for (long long i = n; i <= d; i += n) {
                damaged.insert(i);
            }

            cout << damaged.size() << endl;
        }

    }

};

// int main(int argc, char* argv[])
// {
//     InsomniaCure p;
//     p.solve();
//     return 0;
// }
