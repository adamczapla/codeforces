#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

class Anagram {

public:

    void solve()
    {
        // string s1("gabel"), s2("lageb");
        // cout << boolalpha << solutionOne(s1, s2) << endl;
        // cout << boolalpha << solutionTwo(s1, s2) << endl;
        // cout << boolalpha << solutionThree(s1, s2) << endl;

        // int arr[10] = {2, 4, 5, 5, 5, 5, 5, 7, 9, 9};
        // auto index = lastAndFirstOf(arr, 10, 5);
        // cout << index.first << " " << index.second << endl;
    }


    pair<int, int> lastAndFirstOf(int* arr, int sz, int val)
    {
        int* first = find(arr, arr + sz, val);

        if (first == arr + sz) return pair<int, int>(-1, -1);

        auto last = find_if(first + 1, arr + sz, [val](int i) {
            return i != val;
        });

        int first_pos = distance(arr, first);
        int last_pos = distance(arr, last - 1);

        return pair<int, int>(first_pos, last_pos);
    }



    bool solutionOne(const string& s1, const string& s2)
    {
        if (s1.length() != s2.length()) return false;

        map<char, int> s1_map, s2_map;
        for (int i = 0; i != s1.length(); ++i) {
            ++s1_map[s1[i]];
            ++s2_map[s2[i]];
        }

        return s1_map == s2_map;
    }

    bool solutionTwo(string s1, string s2)
    {
        if (s1.length() != s2.length()) return false;

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        return s1 == s2;
    }

    bool solutionThree(const string& s1, const string& s2)
    {
        if (s1.length() != s2.length()) return false;

        int cnt = 0;
        for (int i = 0; i < s1.length(); ++i) {
            for (int j = 0; j < s2.length(); ++j) {
                if (s1[i] == s2[j]) {
                    ++cnt;
                }
            }
        }

        return s1.length() == cnt;
    }

};

// int main(int argc, char* argv[])
// {
//     Anagram p;
//     p.solve();
//     return 0;
// }
