#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n ,a[50], r[50], offest[50];
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0; i<n; i++)
			cin >> a[i];
		int cnt = 0;
		for(int i=0; i<n; i++){
			int mn_idx = i;
			for(int j=i+1; j<n; j++)
				if(a[j] < a[mn_idx])
					mn_idx = j;
			if(mn_idx == i){
				r[i] = -1;
				offest[i] = -1;
				continue;
			}
			cnt++;
			r[i] = mn_idx;
			offest[i] = mn_idx - i;

			int temp = a[mn_idx];
			for(int j=mn_idx; j > i; j--)
				a[j] = a[j-1];
			a[i] = temp;
		}
		cout << cnt << endl;
		for(int i=0; i<n; i++)
			if(r[i] != -1)
				cout << i+1 << " " << r[i] + 1 << " " << offest[i] << endl;
	}
	return 0;
}
