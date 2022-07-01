#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   string val1,val2;
   cin>>val1>>val2;
   for(int i=0;i<val1.size();i++){
   int n1=tolower(val1[i]);
   int n2=tolower(val2[i]);
   if(n1>n2){
    cout<<1<<endl;
    return 0;

   }else if(n2>n1){
   cout<<-1<<endl;
   return 0;
   }

   }
   cout<<0<<endl;
   return 0;
   }



