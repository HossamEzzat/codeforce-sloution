#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {


        long long a,b,c,mix,suma=0,sumb=0,sumc=0;
        cin>>a;
        cin>>b;
        cin>>c;
        mix=max({a,b,c});

        if(a==mix&&b==mix||a==mix&&c==mix||b==mix&&c==mix)
        {


            if(a<=mix)
            {

                suma=(mix+1)-a;

            }
            if(b<=mix)
            {

                sumb=(mix+1)-b;

            }
            if(c<=mix)
            {

                sumc=(mix+1)-c;

            }

            cout<<suma<<" "<<sumb<<" "<<sumc<<endl;

        }
        else
        {
            if(a<mix)
            {

                suma=(mix+1)-a;

            }
            if(b<mix)
            {

                sumb=(mix+1)-b;

            }
            if(c<mix)
            {

                sumc=(mix+1)-c;

            }

            cout<<suma<<" "<<sumb<<" "<<sumc<<endl;
        }







    }
    return 0;
}
