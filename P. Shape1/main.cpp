#include<bits/stdc++.h>
using namespace std;
int main()
{
	int counter; //4
	cin>>counter;
	for(int i=1;i<=counter;i++){
		for(int z=counter;z>=i;z--){
			cout<<"*";
		}
		cout<<endl;
	}
}
