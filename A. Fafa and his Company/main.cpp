#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num=1;
    for(int i=2;i<=n/2;++i)
        if(n%i==0)num++;
    cout<<num<<endl;
    return 0;
}
