#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{


    int t;
    cin>>t;
    while(t--)
    {

        string test;
        cin>>test;
        for (int i = 0; i < test.length(); i++)
        {
            test[i] = toupper(test[i]);
        }
        string comp=test;
        if(comp=="YES")
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }






}
