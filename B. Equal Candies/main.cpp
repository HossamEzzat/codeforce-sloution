#include <bits/stdc++.h>

using namespace std;

int main() {

	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		long long sum = 0;
		int mn = *min_element(a.begin(), a.end());
		for (int i = 0; i < n; i++) {
			sum += (a[i] - mn);
		}
		cout << sum << '\n';
	}
	return 0;
}
