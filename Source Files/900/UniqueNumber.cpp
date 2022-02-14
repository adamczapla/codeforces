#include <iostream>
#include <deque>

using namespace std;

class UniqueNumber {

public:

    inline void solve()
    {
        int t;
        cin >> t;

        while (t--) {
            int x;
            cin >> x;

            int q = x / 9;
            int r = x % 9;

            deque<int> di(q, 9);
            for (int i = 1; i < q; ++i) {
                r += i;
                for (int j = 0; j < i; ++j) {
                    --di[j];
                }
            }

            if (!di.empty()) {
                int min = di[0];
                while (r >= min && min > 1) {
                    di.push_front(--min);
                    r -= min;
                }
                if (r >= di[0]) {
                    cout << -1 << endl;
                } else {
                    if (r != 0) {
                        di.push_front(r);
                    }
                    for (auto i : di) {
                        cout << i;
                    }
                }
            } else {
                di.push_front(r);
                for (auto i : di) {
                    cout << i;
                }
            }
            cout << endl;
        }

    }

};

// int main(int argc, char* argv[])
// {
//     UniqueNumber p;
//     p.solve();
//     return 0;
// }
