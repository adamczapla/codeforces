#include <iostream>
#include <string>

using namespace std;

class ChatRoom {

public:

    void solve()
    {
        string s;
        cin >> s;

        const string kHello("hello");
        string out;

        size_t beg = 0, pos = 0;
        while ((beg = s.find(kHello[pos], beg)) != string::npos
               && pos != kHello.size()) {
            out += s[beg++];
            ++pos;
        }

        cout << (out == kHello ? "YES" : "NO");
    }

};

// int main(int argc, char* argv[])
// {
//     ChatRoom p;
//     p.solve();
//     return 0;
// }
