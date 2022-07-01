#include <iostream>
#include <stdio.h>
using namespace std;
//lucky division
int main() {

     int n;
     cin>>n;
     int arr[12]={4,7,47,74,77,44,444,474,477,777,774,744};
     bool isTrue=false;
     for(int i=0;i<12;i++){
        if(n%arr[i]==0){
            isTrue=true;
            break;
        }
     }
     if(isTrue==true){
        cout<<"YES"<<endl;
     }else{
           cout<<"NO"<<endl;
     }

	return 0;
}
