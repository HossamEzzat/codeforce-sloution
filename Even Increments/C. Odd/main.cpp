
#include <bits/stdc++.h>

using namespace std;

#define ll long long


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, q;
        cin>>n>>q;
        ll sum = 0;
        ll od = 0, ev = 0;

        for(int i = 0; i < n; i++)
        {
            ll x;
            cin>>x;
            sum += x;
            if(x % 2 == 0) ev++;
            else od++;
        }

        for(int i = 0; i < q; i++)
        {
            ll type, value;
            cin>>type>>value;

            if(type == 0)
            {
                sum = sum + ev * value;
                if(value % 2 == 1)
                {
                    od += ev;
                    ev = 0;
                }
            }
            else
            {
                sum = sum + od * value;
                if(value % 2 == 1)
                {
                    ev += od;
                    od = 0;
                }
            }
            cout<<sum<<endl;
        }

    }

    return 0;
}
