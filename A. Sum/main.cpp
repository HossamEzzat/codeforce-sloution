#include <iostream>

using namespace std;

int main()
{
    int t;
    int a,b,c;
    cin>>t;
    while(t--){
           cin>>a>>b>>c;
        if((a+b)==c)
        {
            cout<<"YES"<<endl;
        }
       else  if(c+b==a)
        {
            cout<<"YES"<<endl;
        }
        else  if(c+a==b)
        {
            cout<<"YES"<<endl;
        }
         else
        {
            cout<<"NO"<<endl;
        }
    }
}
