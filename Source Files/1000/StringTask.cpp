#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <iterator>

using namespace std;

class StringTask {

public:

    void solve()
    {
        string in, out;
        cin >> in;

        const string kVowels("aoyeui");

        transform(in.begin(), in.end(), back_inserter(out), ::tolower);
        out.erase(remove_if(out.begin(), out.end(), [&kVowels](char c) {
            return find(kVowels.cbegin(), kVowels.cend(), c) != kVowels.cend();
        }), out.end());

        auto beg = out.begin();
        while (beg != out.end()) {
            beg = out.insert(beg, '.');
            beg += 2;
        }

        for (auto c : out) {
            cout << c;
        }
    }

};

// int main(int argc, char* argv[])
// {
//     StringTask p;
//     p.solve();
//     return 0;
// }
