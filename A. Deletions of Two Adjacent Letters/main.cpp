#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        char c;
        cin >> c;
        bool ok = 0;
        for (int i = 0; i < s.size(); i += 2) {
            if (s[i] == c) {
                ok = 1;
                break;
            }
        }
        if (ok) cout << "YES\n";
        else cout << "NO\n";

    }
    return 0;
}
