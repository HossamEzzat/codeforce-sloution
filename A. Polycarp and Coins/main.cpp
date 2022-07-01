#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   int a;
   int b;
   int n;
   while(t--){
    cin>>n;
    if(n%3==0){
        a=n/3;
        b=n/3;
    }
    else if(n%3==1){
        a=n/3+1;
        b=n/3;
    }
    else if(n%3==2){
        a=n/3;
        b=n/3+1;
    }

    cout<<a<<" "<<b<<endl;
   }
}
