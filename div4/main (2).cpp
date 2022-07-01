#include <iostream>
#include<bits.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t,a,b,c,d;

   cin>>t;
   while(t--){
         int count=0;
    cin>>a>>b>>c>>d;

    if(a<b){
        count++;
    }
    if(a<c){
        count++;
    }
    if(a<d){
        count++;
    }

    cout<<count<<endl;

   }
}
