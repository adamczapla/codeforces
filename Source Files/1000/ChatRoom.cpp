#include <iostream>
#include <string>

using namespace std;

class ChatRoom {

public:

    void solve()
    {
        string s;
        cin >> s;
        
        const string hello("hello");
        string out;
        size_t beg = 0, pos = 0;
        while ((beg = s.find(hello[pos], beg)) != string::npos 
                && pos != hello.size()) {
            out += hello[beg++];
        }
        cout << out << endl;
    }

};

int main(int argc, char* argv[])
{
    ChatRoom p;
    p.solve();
    return 0;
}
