#include<bits/stdc++.h>

typedef long long int ll;

#define pp pair<ll,ll>


using namespace std;

int main()
{

    ll i,j,k;
    ll n,m,x;


    cin>>n>>m;
    x=min(n,m);

    k=1;
    while(x>0)
    {
        k*=x;
        x--;
    }

    cout<<k;

    return 0;
}
