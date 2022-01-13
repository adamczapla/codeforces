#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class AntonAndPolyHedrons {

public:

    inline void solve()
    {
        unordered_map<string, unsigned> polyh_set = {
            {"Tetrahedron", 4},
            {"Cube", 6},
            {"Octahedron", 8},
            {"Dodecahedron", 12},
            {"Icosahedron", 20}
        };

        unsigned n, cnt = 0;
        cin >> n;

        while (n--) {
            string polyh;
            cin >> polyh;
            auto pos = polyh_set.find(polyh);
            if (pos != polyh_set.cend()) {
                cnt += pos->second;
            }
        }

        cout << cnt << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     AntonAndPolyHedrons p;
//     p.solve();
//     return 0;
// }
