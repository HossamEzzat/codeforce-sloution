#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int total=0;
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            total+=x;

        }

        if(total==n)
        {
            cout<<0<<endl;
        }

        else if(total<n)
        {
            cout<<1<<endl;
        }

        else if(total>n)
        {

            cout<<total-n<<endl;

        }
    }
    return 0;
}
