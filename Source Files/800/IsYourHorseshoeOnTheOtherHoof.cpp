#include <iostream>
#include <set>

using namespace std;

class IsYourHorseshoeOnTheOtherHoof {

public:

    inline void solve()
    {
        long long s1, s2, s3, s4;
        cin >> s1 >> s2 >> s3 >> s4;
        set<long long> unique_colors = {s1, s2, s3, s4};
        cout << 4 - unique_colors.size();
    }

};

// int main(int argc, char* argv[])
// {
//     IsYourHorseshoeOnTheOtherHoof p;
//     p.solve();
//     return 0;
// }
