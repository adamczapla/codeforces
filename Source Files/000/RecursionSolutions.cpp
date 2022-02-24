#include <iostream>
#include <vector>

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
        //
        // int n = 5;
        // cout << summation(n) << endl;
        //
        // int arr[] = {1, 3, 5, 6, 9, 10, 45, 66, 77, 88 };
        // size_t sz = sizeof(arr) / sizeof(int);
        // cout << binarySearch(&arr, 0, sz - 1, 88) << endl;
    }

    template <size_t arr_size>
    int binarySearch(int (*arr)[arr_size], int left_pos, int right_pos, int value)
    {
        if (left_pos > right_pos) {
            return -1;
        }

        int mid_pos = (right_pos + left_pos) / 2;

        if ((*arr)[mid_pos] == value) {
            return mid_pos;
        }

        if ((*arr)[mid_pos] > value) {
            return binarySearch(arr, left_pos, mid_pos - 1, value);
        } else {
            return binarySearch(arr, mid_pos + 1, right_pos, value);
        }
    }



    int summation(int n)
    {
        if (n == 1) return 1;
        return n + summation(n - 1);
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
