#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >>n;
        string s;
        cin>>s;
        cout<<*max_element(s.begin(),s.end())-'a'+1<<endl;
    }
}
