#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class WordCapitalization {

public:

    inline void solve()
    {
        string word;
        cin >> word;
        word[0] = toupper(word.at(0));
        cout << word << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     WordCapitalization p;
//     p.solve();
//     return 0;
// }
