#include <iostream>
#include <set>

using namespace std;

class IWannaBeTheGuy {

public:

    inline void solve()
    {
        unsigned int n;
        cin >> n;

        set<unsigned int> unique_levels;
        for (unsigned int i = 0; i != 2; ++i) {
            unsigned int pq;
            cin >> pq;
            for (unsigned int j = 0; j != pq; ++j) {
                unsigned int a;
                cin >> a;
                unique_levels.insert(a);
            }
        }

        cout << (unique_levels.size() == n
                 ? "I become the guy."
                 : "Oh, my keyboard!")
             << endl;

    }

};

// int main(int argc, char* argv[])
// {
//     IWannaBeTheGuy p;
//     p.solve();
//     return 0;
// }
