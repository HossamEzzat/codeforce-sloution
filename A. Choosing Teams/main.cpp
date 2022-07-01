#include <iostream>

using namespace std;

int main()
{
     int n,m;
    while (cin>>n>>m)
    {
        int ans=0,temp=5-m;
        while (n--)
        {
            int temp2;
            cin>>temp2;
            if (temp2<=temp)
                ans++;
        }
        cout<<ans/3<<endl;
    }
    return 0;
}
