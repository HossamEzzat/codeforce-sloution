# include <iostream>
#include <bits/stdc++.h>
using namespace std;

#include <iostream>

using namespace std;

int main()
{
   int x;
   cin>>x;
   int x1=x/10;
   int x2=x%10;
   if((x1+x2)>(x1*x2)){
    cout<<"sum";
   }else if((x1*x2)>(x1+x2)){
    cout<<"product";
   }else{
       cout<<"equal";
   }



return 0;
}

