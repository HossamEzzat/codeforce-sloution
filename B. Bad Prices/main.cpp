#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, a[150000];
	cin >> t;
	while(t--){
		int num_of_bad = 0;
		cin >> n;
		for(int i=0; i<n; i++)
			cin >> a[i];

		int mn = a[n-1];
		for(int i = n-2; i>=0; i--){
			if(a[i] > mn){
				num_of_bad++;
			}else{
				mn = a[i];
			}
		}

		cout << num_of_bad << endl;
	}
	return 0;
}
