#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class GravityFlip {

public:

    inline void solve()
    {
        int n;
        cin >> n;

        vector<int> box;
        while (n--) {
            int a;
            cin >> a;
            box.push_back(a);
        }

        sort(box.begin(), box.end());
        for (int a : box)
            cout << a << " ";
    }

};

// int main(int argc, char* argv[])
// {
//     GravityFlip p;
//     p.solve();
//     return 0;
// }
