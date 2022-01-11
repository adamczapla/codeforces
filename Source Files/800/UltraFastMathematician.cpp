#include <iostream>
#include <bitset>

using namespace std;

class UltraFastMathematician {

public:

    inline void solve()
    {
        string first, second;
        cin >> first >> second;

        bitset<100> first_bitset(first);
        bitset<100> second_bitset(second);
        auto result_bitset = first_bitset ^ second_bitset;

        string out = result_bitset.to_string();
        cout << out.substr(100 - first.length());
    }

};

// int main(int argc, char* argv[])
// {
//     UltraFastMathematician p;
//     p.solve();
//     return 0;
// }
