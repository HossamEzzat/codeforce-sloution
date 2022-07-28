#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	long long sum = 0;  // 10
	while(t--){ // 4   1 2 3 4
		int num;
		cin>>num; // 7  2 1
		sum+=num; // sum = sum + num     9 + 1 = 10
	}
	cout<<abs(sum)<<endl;
}
