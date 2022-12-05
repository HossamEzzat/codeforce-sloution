#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int a,b,c;

    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        int ar[3]={a,b,c};
        sort(ar,ar+3);
        cout<<ar[1]<<endl;

    }
}
