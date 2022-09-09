#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    long long int i,j;
    int  a;
    string b;
    string c;

    cin>>t;

    int sum=0;

    while(t--)
    {

        cin>>a;
        cin>>b;
        cin>>c;

        for(i=0; i<a; i++)
        {
             if(b[i] != c[i] )
             {
                 if (b[i]=='R' || c[i]=='R')
             {
                 sum=1;
             }
             }


        }

        if(sum==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

        sum=0;



    }



return 0;
}
