#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    int ans=a/100;
    int lft=a%100;
    cout<<"*****"<<endl;
    cout<<ans<<endl;
    cout<<lft<<endl;
    cout<<"*****"<<endl;

     ans+=lft/20;
    lft=lft%20;
    cout<<"*****"<<endl;
    cout<<ans<<endl;
    cout<<lft<<endl;
    cout<<"*****"<<endl;

     ans+=lft/10;
    lft=lft%10;
cout<<"*****"<<endl;
    cout<<ans<<endl;
    cout<<lft<<endl;
cout<<"*****"<<endl;
     ans+=lft/5;
     lft=a%5;
cout<<"*****"<<endl;
     cout<<ans<<endl;
    cout<<lft<<endl;
cout<<"*****"<<endl;

    ans+=lft/1;
    cout<<ans<<endl;
    cout<<lft<<endl;
    return 0;
}
