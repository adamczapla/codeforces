#include <iostream>
#include <deque>

using namespace std;

class SerejaAndDima {

public:

    inline void solve()
    {
        unsigned n;
        cin >> n;

        deque<unsigned> qi;
        for (unsigned i = 0; i != n; ++i) {
            unsigned c;
            cin >> c;
            qi.push_back(c);
        }

        unsigned sereja = 0, dima = 0;
        for (unsigned i = 1; i <= n; ++i) {
            if (i % 2) { // sereja's turn
                if (qi.front() > qi.back()) {
                    sereja += qi.front();
                    qi.pop_front();
                } else {
                    sereja += qi.back();
                    qi.pop_back();
                }
            } else { // Dima*s turn
                if (qi.front() > qi.back()) {
                    dima += qi.front();
                    qi.pop_front();
                } else {
                    dima += qi.back();
                    qi.pop_back();
                }
            }
        }

        cout << sereja << " " << dima << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     SerejaAndDima p;
//     p.solve();
//     return 0;
// }
