#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int max = 0;
	for(int i=1;i<=t;i++){
		int num;
		cin>>num;
		if(i == 1){
			max = num;
		}
		if(num > max){
			max = num;
		}
	}
	cout<<max<<endl;
}
