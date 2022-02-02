#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class Dubstep {

public:

    inline void solve()
    {
        string dubstep;
        cin >> dubstep;

        string::size_type pos;
        while ((pos = dubstep.find("WUB"))
               != string::npos) {
            dubstep.erase(pos, 3);
            if (pos != 0 && !isspace(dubstep[pos - 1]))
                dubstep.insert(pos, " ");
        }
        cout << dubstep << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     Dubstep p;
//     p.solve();
//     return 0;
// }
