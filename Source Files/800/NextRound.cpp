#include <iostream>
#include <vector>

using namespace std;

class NextRound {

public:

    inline void solve()
    {
        vector<unsigned int> scores;
        unsigned int n, k, cnt = 0;

        cin >> n >> k;

        while (n--) {
            unsigned int score;
            cin >> score;
            scores.push_back(score);
        }

        for (auto s : scores) {
            if (s >= scores[k - 1] && s > 0) {
                ++cnt;
            }
        }

        cout << cnt << endl;

    }

};

int main(int argc, char* argv[])
{
    NextRound p;
    p.solve();
    return 0;
}
