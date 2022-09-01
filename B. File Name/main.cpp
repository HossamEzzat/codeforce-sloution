#include <bits/stdc++.h>
using namespace std;
char str[101];

int main()
{
     int n,k=0;
     cin>>n;
     for(int i=0;i<n;i++){
        cin>>str[i];
     }
      for(int i=0;i<n-2;i++){
        if (str[i] == 'x' && str[i+1] == 'x' && str[i+2] == 'x')
                ++k;
     }
     cout<<k<<endl;
    return 0;
}
