#include <iostream>
#include <vector>

using namespace std;

class Games {

public:

    inline void solve()
    {
        vector<vector<unsigned>> teams;
        unsigned n;

        cin >> n;

        while (n--) {
            vector<unsigned> team;
            int home, guest;
            cin >> home >> guest;
            team.push_back(home);
            team.push_back(guest);
            teams.push_back(team);
        }

        unsigned cnt = 0;

        for (auto curr_team : teams) {
            for (auto team : teams) {
                if (curr_team != team
                    && curr_team[0] == team[1]) {
                    ++cnt;
                }
            }
        }

        cout << cnt << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     Games p;
//     p.solve();
//     return 0;
// }
