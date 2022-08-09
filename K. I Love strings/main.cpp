#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    int t;
    cin>>t;
    while(t--){
        cin>>s1>>s2;
        int m=max(s1.size(),s2.size());
        for(int i=0;i<m;i++){
            if(i<s1.size()){
                cout<<s1[i];
            }

            if(i<s2.size()){
                cout<<s2[i];
            }
        }
        cout<<endl;



    }
}
