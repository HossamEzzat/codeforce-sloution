#include <iostream>
#include <cstdio>

using namespace std;
int main(){
	int n,a,b,sum=0,max=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		sum -= a;
		sum += b;
		if(max<sum){
			max = sum;
		}
	}
	cout<<max<<endl;
	return 0;
}
