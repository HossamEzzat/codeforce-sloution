#include<bits/stdc++.h>
using namespace std;
int main()
{
	int counter;
	cin>>counter;
	for(int i=1;i<=counter;i++){

		int x;
		cin>>x;
		if(x==0){
            cout<<0<<" ";
		}else{


		while(x){
            cout<<x%10<<" ";
            x=x/10;
		}

		}
		cout<<endl;
	}

}
