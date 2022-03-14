#include <iostream>
#include <unordered_map>

using namespace std;

class RomanToInteger{

public:

    void solve()
    {
        string s("MCMXCIV");
        // string s("MCMXC");
        // string s("III");
        // string s("IV");
        // string s("VI");
        // string s("IX");
        // string s("LVIII");
        // string s("XXII");
        // string s("MMMMMMMMMMMDCCCLXXXIX"); // no
        // string s("MMXVIII");
        cout << romanToInt(s) << endl;
    }

    int romanToInt(string s) {
        unordered_map<char, int> kRoman {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };
        int total = 0; 
        for (int i = 0; i < s.size() - 1; ++i) {
            if (kRoman[s[i+1]] > kRoman[s[i]]) {
                total -= kRoman[s[i]];
            } else {
                total += kRoman[s[i]];
            }
        }
        total += kRoman[s[s.size()-1]];
        return total;
    }

};

// int main(int argc, char* argv[])
// {
//     RomanToInteger p;
//     p.solve();
//     return 0;
// }

