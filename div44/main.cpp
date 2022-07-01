#include <iostream>
#include<bits.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   int n;
   int result=0;
   int sum=0;

   cin>>t;
   while(t--){
    cin>>n;
 int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

     int m = sizeof(arr) / sizeof(arr[0]);
     sort(arr, arr + m);
    cout<<(sum-arr[0]*n)<<endl;
   }


}
