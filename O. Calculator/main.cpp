#include <iostream>
#include<bits/stdc++.h>
using namespace std;
//hossam
int main()
{
   int a,b;
   char op;
   cin>>a>>op>>b;
   if(op=='+'){
    cout<<(a+b);
   }
    if(op=='-'){
    cout<<(a-b);
   }
    if(op=='*'){
    cout<<(a*b);
   }
    if(op=='/'){
    cout<<(a/b);
   }
}
