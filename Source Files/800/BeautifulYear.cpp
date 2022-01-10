#include <iostream>
#include <set>

using namespace std;

class BeautifulYear {

public:

    inline void solve()
    {
        set<int> unique_digits;
        int y, digits_cnt;

        cin >> y;

        do {
            unique_digits.clear();
            digits_cnt = 0;
            int yy = ++y;

            do {
                unique_digits.insert(yy % 10);
                ++digits_cnt;
            } while (yy /= 10);

        } while (unique_digits.size() != digits_cnt);

        cout << y << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     BeautifulYear p;
//     p.solve();
//     return 0;
// }
