#include <iostream>
#include <string>
#include <vector>

using namespace std;

class BrainPhotos {

public:

    inline void solve()
    {
        unsigned int n, m;
        cin >> n >> m;
        cin.ignore(1, '\n');

        const vector<char> colors = {'C', 'M', 'Y'};
        string out = "#Black&White";
        while (n--) {
            string row;
            getline(cin, row);
            for (auto c : colors) {
                if (row.find_first_of(c) != string::npos) {
                    out = "#Color";
                    cin.ignore(1, '\n');
                    n = 0;
                    break;
                }
            }
        }
        cout << out << endl;
    }

};

// int main(int argc, char* argv[])
// {
//     BrainPhotos p;
//     p.solve();
//     return 0;
// }
