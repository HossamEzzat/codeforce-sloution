#include<bits/stdc++.h>
using namespace std;

int arr[2000];

int main(){
	int t;
	int ans= 1;
	for(int i = 1; i<= 1666; i++){
		if(i % 3 != 0 && i % 10 != 3){
			arr[ans++] = i;
		}
	}
	int n;
	cin >> t;
	while(t--){
		cin >> n;
		cout << arr[n] << endl;
	}
	return 0;
}
