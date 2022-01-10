#include <iostream>
#include <string>

using namespace std;

class QueueAtTheSchool {

public:

    inline void solve()
    {
        int n, t;
        cin >> n >> t;

        string queue;
        cin >> queue;

        while (t--) {
            for (int i = 0; i <= n - 1; ++i) {
                if (queue[i] == 'B' && queue[i + 1] == 'G') {
                    queue[i] = 'G';
                    queue[i + 1] = 'B';
                    ++i;
                }
            }
        }

        cout << queue << endl;
    }
};

// int main(int argc, char* argv[])
// {
//     QueueAtTheSchool p;
//     p.solve();
//     return 0;
// }

