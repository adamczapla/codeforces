#include <iostream>
#include <string>
#include <set>

using namespace std;

class AntonAndLetters {

public:

    inline void solve()
    {
        set<char> unique_letters;
        string line;

        if (getline(cin, line)) {
            string::size_type pos = 0;
            while ((pos = line.find_first_not_of("{}, ", pos))
                   != string::npos) {
                unique_letters.insert(line.at(pos));
                ++pos;
            }
        }

        cout << unique_letters.size() << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     AntonAndLetters p;
//     p.solve();
//     return 0;
// }
