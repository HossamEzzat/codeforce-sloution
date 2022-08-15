#include <iostream>
using namespace std;

int main() {
	int t, n, k, a[30], b[30];
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=0; i<n; i++)
			cin >> a[i];
		for(int i=0; i<n; i++)
			cin >> b[i];

		for(int x= 1; x<=k; x++){
			int a_mn_idx = 0;
			for(int i=1; i<n; i++)
				if(a[i] < a[a_mn_idx])
					a_mn_idx = i;
			int b_mx_idx = 0;
			for(int i=1; i<n; i++)
				if(b[i] > b[b_mx_idx])
					b_mx_idx = i;
			if(b[b_mx_idx] > a[a_mn_idx]){
				// swap
				int tmp = a[a_mn_idx];
				a[a_mn_idx] = b[b_mx_idx];
				b[b_mx_idx] = tmp;
			}else
				break;
		}
		int sum = 0;
		for(int i=0; i<n; i++)
			sum += a[i];
		cout << sum << endl;
	}
	return 0;
}
