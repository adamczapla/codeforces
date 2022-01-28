#include<iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Borze {

public:

    inline void solve()
    {
        string encoded, decoded;
        cin >> encoded;

        auto beg = encoded.begin();
        while (distance(beg, encoded.end()) >= 2) {
            string s = encoded.substr(beg - encoded.begin(), 2);
            if (s == "-.") {
                decoded += '1';
                ++beg;
            } else if (s == "--") {
                decoded += "2";
                ++beg;
            } else {
                decoded += '0';
            }
            ++beg;
        }

        cout << (beg == encoded.end() ? decoded : decoded += '0');

        // char prev = '#';
        // auto beg = encoded.cbegin();
        // while (beg != encoded.cend()) {
        //     if (*beg == '.') {
        //         if (prev == '-') {
        //             decoded += '1';
        //             prev = '#';
        //         } else {
        //             decoded += '0';
        //         }
        //     } else {
        //         if (prev == '-') {
        //             decoded += '2';
        //             prev = '#';
        //         } else {
        //             prev = *beg;
        //         }
        //     }
        //     ++beg;
        // }

        // cout << decoded << endl;

    }

};

// int main(int argc, char* argv[])
// {
//     Borze p;
//     p.solve();
//     return 0;
// }
