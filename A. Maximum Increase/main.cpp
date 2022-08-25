#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,cnt=1,ans=0;
    cin>>n;
    int a[n+10];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=1;i<n;i++){
        if(a[i]>a[i-1]){
            cnt++;
        }
        else{
            ans=max(cnt,ans);
            cnt=1;
        }
    }
    ans=max(cnt,ans);
    cout<<ans<<endl;
    return 0;
}
