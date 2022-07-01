#include <bits/stdc++.h>

using namespace std;
#define ll           long long

#define endl         "\n"
#define IOS          ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const ll inf = 1e9, MOD = 1e9 + 7, MAX = 2e5 + 10;


int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    IOS
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int mod = a % b;
        cout << (b - mod == b ? 0 : b - mod) << endl;
    }
}
