#include <iostream>

using namespace std;

/* Example: 13/9 = Rest 4
 *
 * If I reduce the denominator by the remainder, the result is even,
 * because 13/5 = 3. Or I leave the denominator and instead increase
 * the numerator by 5 then the result is also even.
 *
 */
class DivisibilityProblem {

public:

    inline void solve()
    {
        unsigned int t;
        cin >> t;

        while (t--) {
            long long a, b;
            cin >> a >> b;
            cout << (a % b
                     ? b - a % b
                     : 0)
                 << endl;
        }
    }

};

int main(int argc, char* argv[])
{
    DivisibilityProblem p;
    p.solve();
    return 0;
}
