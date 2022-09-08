#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin>>n;
    for(int i=31; i>=0; i--)
    {
        if(n&(1<<i))
        {
            cout<<((1<<i)-1)<<"\n";
            return;
        }
    }
}
    int main()
    {
        int t;
        cin>>t;
        for(int i=1; i<=t; i++)
        {

            solve();
        }
    }
