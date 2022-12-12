#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        long long arr1[n],arr2[n];
        for(int i=0;i<n;i++)cin>>arr1[i];
        for(int i=0;i<n;i++)cin>>arr2[i];
        for(int i=0;i<n;i++){
          if(arr1[i]<arr2[i]){
            swap(arr1[i],arr2[i]);
          }

        }
        long long n1=*max_element(arr1,arr1+n);
        long long n2=*max_element(arr2,arr2+n);
        cout<<n1*n2<<endl;
    }
}
