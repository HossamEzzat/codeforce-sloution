#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e5+10;
int a[maxn];
int main(void){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		set<int> s;
		for(int i = 1; i <= n; i++){
			int x;
			cin >> x;
			s.insert(x);
		}
		cout<<s.size()<<endl;
	}
	return 0;
}
