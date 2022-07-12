#include<bits/stdc++.h>
using namespace std;

int main()
{

    int v;
    cin>>v;
    while(v--)
    {

       int n;
       cin >>n;
       string s(n,'0');
       cin>>s;
       set<char>p;
       for(int i=0;i<s.size();i++){
        p.insert(s[i]);
       }
       int x=p.size();
       int y=s.size();
       int z=(x*2)+(y-x);
       cout<<z<<endl;


    }


}




