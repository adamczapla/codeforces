#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class RestoringThreeNumbers {

public:

    inline void solve()
    {
        int x1, x2, x3, x4;
        cin >> x1 >> x2 >> x3 >> x4;

        vector<int> vi = {x1, x2, x3, x4};
        auto max_pos = max_element(vi.cbegin(), vi.cend());
        int abc = *max_pos;
        vi.erase(max_pos);

        int ab = vi[0], ac = vi[1], bc = vi[2];
        int c = abc - ab;
        int b = bc - c;
        int a = ab - b;
        cout << a << " " << b << " " << c << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     RestoringThreeNumbers p;
//     p.solve();
//     return 0;
// }
