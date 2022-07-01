#include <iostream>

using namespace std;

int main()
{
    char myinput;
    cin>>myinput;
    if(myinput>=97&&myinput<=122){
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }
    else if(myinput>=65&&myinput<=90){
          cout<<"ALPHA"<<endl;
              cout<<"IS CAPITAL"<<endl;
    }
    else{
        cout<<"IS DIGIT"<<endl;
    }
}
