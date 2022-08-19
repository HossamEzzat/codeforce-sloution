#include <iostream>
using namespace std;

int main() {
	int t, n, a[50];
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i<n; i++)
			cin >> a[i];
		int l = 0, r = n-1;
		while(a[l] == 0)
			l++;
		while(a[r] == 0)
			r--;
		int c = 0;
		for(int i=l; i<r; i++)
			if(a[i] == 0)
				c++;
		cout << c << endl;
	}
	return 0;
}
