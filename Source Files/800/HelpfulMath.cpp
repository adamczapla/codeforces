#include <iostream>
#include <sstream>
#include <set>

using namespace std;

class HelpfulMath {

public:

    inline void solve()
    {
        multiset<char> sum_set;
        string expr;

        if (getline(cin, expr)) {
            istringstream is(expr);
            char c;
            while ((c = is.get()) != EOF) {
                sum_set.insert(c);
                is.ignore(1);
            }
        }

        string sum;
        for (auto c : sum_set) {
            sum.append(1, c);
            sum.append("+");
        }

        cout << sum.substr(0, sum.length() - 1) << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     HelpfulMath p;
//     p.solve();
//     return 0;
// }
