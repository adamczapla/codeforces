#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class PalindromeNumber {

public:

    void solve()
    {
        int p = 11211;
        cout << boolalpha << isPalindrome(p) << endl;
    }

    bool isPalindrome(int x)
    {

        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int revertedNumber = 0;
        while (x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }

        return (x == revertedNumber
                || x == revertedNumber / 10);


        // if (x < 0) {
        //     return false;
        // }

        // if (x / 10 == 0) {
        //     return true;
        // }

        // string x_str = to_string(x);
        // for (int left = 0, right = x_str.size() - 1;
        //      left < right; ++left, --right) {
        //     if (x_str[left] != x_str[right]) {
        //         return false;
        //     }
        // }

        // return true;
    }

};

// int main(int argc, char* argv[])
// {
//     PalindromeNumber p;
//     p.solve();
//     return 0;
// }
