#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	long long n;
	cin >> t;
	while(t--){
		cin >> n;
		while(n % 2 == 0){
			n /= 2;
		}
		if(n > 1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
