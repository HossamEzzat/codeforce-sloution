#include <iostream>

using namespace std;

int main()
{
     int t,n,x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        int c = 2,ans = 1;
        while(c < n){
            c += x;
            ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}
