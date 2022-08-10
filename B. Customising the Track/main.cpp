#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, x;
	cin >> t;
	while(t--){
		cin >> n;
		long long sum = 0;
		for(int i=0; i<n; i++){
			cin >> x;
			sum += x;
		}
		int c1 = sum % n;
		int c2 = n - c1;
		cout << 1ll * c1 * c2 << endl;
	}
	return 0;
}
