#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=5,tag=0;
    while(n--)
    {
        string handcards;
        cin>>handcards;

        if(s[0]==handcards[0])
            tag=1;
        else if(s[1]==handcards[1])
            tag=1;
    }
    if(tag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
