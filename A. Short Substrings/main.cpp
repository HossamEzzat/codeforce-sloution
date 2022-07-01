#include <iostream>
#include <algorithm>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char first[101];
         int t;
    cin>>t;

    while(t--)
    {
        cin>>first;
        int len=strlen(first);
        cout<<first[0];
        for(int i=1; i<len; i=i+2)
        {
            cout<<first[i];
        }
        cout<<endl;
    }
    return 0;
}
