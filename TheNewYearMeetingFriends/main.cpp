#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int arr[5];
    for(int i=0; i<3; i++)
    {
        cin>>arr[i];
    }
   sort(arr, arr+3);
   int answer=arr[2]-arr[0];
   cout<<answer<<endl;
    return 0;
}
