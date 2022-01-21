#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class GiftsFixing {

public:

    inline void solve()
    {
        unsigned long long t;
        cin >> t;

        while (t--) {
            unsigned long long n;
            cin >> n;

            vector<unsigned long long> vc;
            for (unsigned long long i = 0; i != n; ++i) {
                unsigned long long c;
                cin >> c;
                vc.push_back(c);
            }

            vector<unsigned long long> vo;
            for (unsigned long long i = 0; i != n; ++i) {
                unsigned long long o;
                cin >> o;
                vo.push_back(o);
            }

            unsigned long long min_c, min_o;
            min_c = *min_element(vc.begin(), vc.end());
            min_o = *min_element(vo.begin(), vo.end());

            unsigned long long moves = 0;
            for (unsigned long long i = 0; i != n; ++i) {
                if (vc[i] > min_c && vo[i] > min_o) {
                    moves += max(vc[i] - min_c, vo[i] - min_o);
                } else {
                    moves += vc[i] - min_c;
                    moves += vo[i] - min_o;
                }
            }

            cout << moves << endl;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     GiftsFixing p;
//     p.solve();
//     return 0;
// }
