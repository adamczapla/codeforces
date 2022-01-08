#include <iostream>
#include <string>

using namespace std;

class WayTooLongWords {

public:

    inline void solve()
    {
        const string::size_type max = 10;
        unsigned int n = 0;
        cin >> n;
        while (n--) {
            string word;
            cin >> word;
            auto len = word.length();
            if (len <= max) {
                cout << word << endl;
            } else {
                cout << word.at(0)
                     << len - 2
                     << word.at(len - 1)
                     << endl;
            }
        }
    }

};

// int main(int argc, char* argv[])
// {
//     WayTooLongWords p;
//     p.solve();
//     return 0;
// }
