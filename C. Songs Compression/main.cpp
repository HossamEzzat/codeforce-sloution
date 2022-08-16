#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, arr[100000], a, b;
	long long sum = 0;
	cin >> n >> m;
	for(int i=0; i<n; i++){
		cin >> a >> b;
		arr[i] = a - b;
		sum += b;
	}
	if(sum > m)
		cout << -1;
	else{
		int cnt = n;
		sort(arr, arr+n);
		for(int i=0; i<n; i++)
			if(sum + arr[i] <= m){
				sum += arr[i];
				cnt --;
			}else
				break;
		cout << cnt ;
	}
	return 0;
}
