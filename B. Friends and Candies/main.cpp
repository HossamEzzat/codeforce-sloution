#include<bits/stdc++.h>

using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ar[n];
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin>>ar[i];
            sum+=ar[i];
        }
        if (sum%n==0){
            float avg = (float)sum/(float)n;
            int k = 0;
            for (int i = 0; i < n; ++i) {
                if (ar[i]>avg){
                    k++;
                }
            }
            cout<<k<<"\n";
        } else{
            cout<<"-1\n";
        }
    }
}
