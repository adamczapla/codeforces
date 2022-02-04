#include <iostream>

using namespace std;

class Factorial {

public:

    inline void solve()
    {
        cout << fact_1(5) << endl;
        cout << fact_2(5) << endl;
    }

    int fact_1(int value)
    {
        int ret = 1;
        while (value > 1)
            ret *= value--;
        return ret;
    }

    int fact_2(int n)
    {
        if (n == 1) return 1;
        return fact_2(n - 1) * n;
    }
};

// int main(int argc, char* argv[])
// {
//     Factorial p;
//     p.solve();
//     return 0;
// }
