#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void fast()
{
    cin.tie(0);
    cout.sync_with_stdio(0);
}
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        bool f=0;
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]==arr[i+1])
            {
                f=1;
            }
        }
        if(f)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }




    return 0;
}
