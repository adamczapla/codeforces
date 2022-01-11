#include <iostream>

using namespace std;

class InSearchOfAnEasyProblem {

public:

    inline void solve()
    {
        unsigned int n, sum = 0;
        cin >> n;

        while (n--) {
            unsigned int p;
            cin >> p;
            sum += p;
        }

        cout << (sum > 0
                 ? "HARD"
                 : "EASY")
             << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     InSearchOfAnEasyProblem p;
//     p.solve();
//     return 0;
// }
