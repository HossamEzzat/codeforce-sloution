#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e6+7;
const int mod = 1e9+7;
int t,n,m,k;
int a[N],b[N];
vector<int> v1,v2;


signed main()

{

   cin>>t;
    while(t--){


        cin>>n>>k;

        for(int i =0 ; i < n ; i ++) cin>>a[i];
        sort(a,a+n);
        int flag = 1;
        if(a[n-1] > k){


            flag = 0;
        }
        if(flag) {


            cout<<"YES"<<endl;
            continue;
        }
        if(a[0]+a[1] <= k){


            cout<<"YES"<<endl;
        }else{


            cout<<"NO"<<endl;
        }
    }
    return 0;
}
