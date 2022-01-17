#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class TheNewYearMeetingFriends {

public:

    inline void solve()
    {
        unsigned int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        vector<unsigned int> vi = {x1, x2, x3};
        unsigned int min = *min_element(vi.cbegin(), vi.cend());
        unsigned int max = *max_element(vi.cbegin(), vi.cend());
        cout << max - min << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     TheNewYearMeetingFriends p;
//     p.solve();
//     return 0;
// }
