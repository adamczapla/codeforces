#include <iostream>
#include <vector>

using namespace std;

class BachgoldProblem {

public:

    inline void solve()
    {
        unsigned int n;
        cin >> n;

        unsigned int k = n / 2;
        cout << k << endl;

        vector<unsigned int> vi(k, 2);
        if (n % 2)
            vi.back() = 3;

        for (auto i : vi)
            cout << i << " ";
        cout << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     BachgoldProblem p;
//     p.solve();
//     return 0;
// }
