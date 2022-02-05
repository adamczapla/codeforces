#include <iostream>
#include <string>

using namespace std;

class Keyboard {

public:

    inline void solve()
    {
        const string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

        char shift_direction;
        cin >> shift_direction;

        string sequence;
        cin >> sequence;

        int shift = 1;
        if (shift_direction == 'R') {
            shift = -1;
        }

        string message;
        for (int i = 0; i < sequence.length(); ++i) {
            int pos = keyboard.find(sequence[i]);
            message += keyboard[pos + shift];
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
