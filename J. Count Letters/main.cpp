#include<bits/stdc++.h>
using namespace std;
int main()
{
	string value;
	cin>>value;

	sort(value.begin(),value.end());

//aaabc
	int size = value.size();
	for(int i=0;i<size;i++){
		char c = value[i]; //c=a
		int counter = 1;
		while(value[i] == value[i+1]){
			counter++; //2
		}

		cout<<c<<" : "<<counter<<endl;

	}

}
