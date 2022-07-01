#include <iostream>
#include <cctype>

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char myinput;
    cin>>myinput;
    if(myinput>=97&&myinput<=122){
     myinput=  toupper(myinput);
     cout<<myinput<<endl;
    }
    else if(myinput>=65&&myinput<=90){
          myinput=  tolower(myinput);
     cout<<myinput<<endl;
    }

}
