#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

class CapsLock{

public:

    void solve()
    {
        string s;
        cin >> s;
        
        auto sought = find_if(s.cbegin() + 1, s.cend(), [](char c) { 
            return islower(c); 
        });
        if (sought == s.cend()) {
            transform(s.begin(), s.end(), s.begin(), [](char c) {
                return islower(c) ? toupper(c) : tolower(c);
            });
        }
        cout << s << endl;
    }

};

/* int main(int argc, char* argv[]) */
/* { */
/*     CapsLock p; */
/*     p.solve(); */
/*     return 0; */
/* } */

