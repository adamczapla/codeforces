#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class LongestCommonPrefix {

public:

    void solve()
    {
        // vector<string> strs = {"flower", "flow", "flight"};
        // vector<string> strs = {"a", "b"};
        // cout << longestCommonPrefix(strs) << endl;
    }

    string longestCommonPrefix(vector<string>& strs)
    {
        auto sz = strs.size(), cnt = sz;
        if (sz == 1) {
            return strs[0];
        }

        string min = *min_element(strs.cbegin(), strs.cend());

        int i = 0;
        while (i < min.size() && cnt == sz) {
            cnt = count_if(strs.cbegin(), strs.cend(), [min, i](const string & s) {
                return s[i] == min[i];
            });
            ++i;
        }

        return cnt == sz ? min : min.substr(0, i - 1);
    }

};

// int main(int argc, char* argv[])
// {
//     LongestCommonPrefix p;
//     p.solve();
//     return 0;
// }
