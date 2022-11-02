#include <iostream>

using namespace std;
#define ll long long
int main()
{
     ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%2){
            for(ll i=1;i<=n-3;i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<n<<" "<<n-2<<" "<<n-1<<endl;
        }
        else{
            for(ll i=1;i<=n;i+=2){
                cout<<i+1<<" "<<i<<" ";
            }
            cout<<endl;
        }
}
}
