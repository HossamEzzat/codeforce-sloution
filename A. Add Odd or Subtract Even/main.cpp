#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,a,b,dif,k;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;

        if(a==b)
        {
            k=0;
        }
        else if(a>b)
        {
            dif=a-b;
            if(dif%2==0)
            {
                k=1;
            }
            else
            {
                k=2;
            }
        }
        else if(b>a)
        {
            dif=b-a;
            if(dif%2==0)
            {
                k=2;
            }
            else
            {
                k=1;
            }
        }
        cout<<k<<endl;

    }
    return 0;
}
