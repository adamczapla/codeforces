#include <iostream>

using namespace std;

class RecursionSolutions {

public:

    void solve()
    {
        // int value = 244;
        // cout << decToBin(value) << endl;

        // string word("anna");
        // string word("hallo");
        // string word("halGlah");
        // cout << boolalpha << isPalindrome(word) << endl;
    }

    int decToBin(int value)
    {
        if (value == 1) return 10;
        return (decToBin(value / 2) + value % 2) * 10;
    }

    bool isPalindrome(const string& word)
    {
        if (word.empty() || word.size() == 1) {
            return true;
        }

        if (word[0] == word[word.size() - 1]) {
            return isPalindrome(word.substr(1, word.size() - 2));
        }

        return false;
    }

    int gcd(int a, int b)
    {
        if (!b) return a;
        return gcd(b, a % b);
    }

};

// int main(int argc, char* argv[])
// {
//     RecursionSolutions p;
//     p.solve();
//     return 0;
// }
