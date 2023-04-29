#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        unordered_map<int, int> freq;
        for (int x : a) {
            freq[x]++;
        }

        int ans = -1;
        for (auto p : freq) {
            if (p.second >= 3) {
                ans = p.first;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
