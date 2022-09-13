#include <iostream>
using namespace std;

char c;
int main() {
    long long int  n, x, d, ans;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> c >> d;
        if (c == '+') {
            x += d;
        } else if (d <= x) {
            x -= d;
        } else {
            ans++;
        }
    }
    cout << x << " " << ans;
}
