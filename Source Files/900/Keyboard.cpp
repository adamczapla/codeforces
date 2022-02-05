#include <iostream>
#include <string>
#include <map>

using namespace std;

class Keyboard {

public:

    inline void solve()
    {
        const string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
        const map<char, int> shift {{'L', 1}, {'R', -1}};

        char shift_direction;
        cin >> shift_direction;

        string sequence;
        cin >> sequence;

        string message;
        for (int i = 0; i < sequence.length(); ++i) {
            int pos = keyboard.find(sequence[i]);
            auto s = shift.find(shift_direction);
            message += keyboard[pos + s->second];
        }

        cout << message << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     Keyboard p;
//     p.solve();
//     return 0;
// }
