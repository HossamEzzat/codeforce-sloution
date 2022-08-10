#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, x, mx = 0, mn = 1000000000+25;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x;
		if(x < mn)
			mn = x;
		if(x > mx)
			mx = x;
	}
	cout << (mx - mn + 1) - n;
	return 0;
}
