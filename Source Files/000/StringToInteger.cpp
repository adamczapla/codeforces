#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class StringToInteger {

public:

    void solve()
    {
        // string s("  -565.6-kjkl88");
        // string s("  -+413");
        // string s("18446744073709551617");
        // string s("-219947483649");
        // string s("-428372509438570982");
        // string s("00000-42a1234");
        // string s("45.9");
        // string s("20000000000000000000");
        // int t = s.find_first_not_of("0123456789", 2);
        // cout << t << endl;
        // cout << myAtoi(s) << endl;
    }

    int myAtoi(string s)
    {
        const string kDigits("0123456789");
        const string kDelim(" +-");

        int before = s.find_first_not_of(kDelim);
        int first = s.find_first_of(kDigits);
        if (first == string::npos
            || (first != string::npos
                && before < first)) {
            return 0;
        }

        int plus_pos = s.find_first_of("+");
        int minus_pos = s.find_first_of("-");
        if ((plus_pos != string::npos && plus_pos < first - 1)
            || (minus_pos != string::npos && minus_pos < first - 1)) {
            return 0;
        }

        int last = s.find_last_of(kDigits);
        int after = s.find_first_not_of(kDigits, first);
        if (after != string::npos) {
            last = after - 1;
        }

        unsigned int max = pow(2, 31);

        unsigned long long total = 0;
        for (int i = first; i <= last; ++i) {
            if (total > max) break;
            total = total * 10 + s[i] - '0';
        }

        bool is_negative = false;
        int sign_pos = s.find_first_of("-");
        if (sign_pos != string::npos
            && sign_pos < first) {
            is_negative = true;
        }

        return (total > max - 1 && !is_negative ? max - 1
                : total > max && is_negative ? max
                : is_negative ? -total : total);
    }


};

// int main(int argc, char* argv[])
// {
//     StringToInteger p;
//     p.solve();
//     return 0;
// }
