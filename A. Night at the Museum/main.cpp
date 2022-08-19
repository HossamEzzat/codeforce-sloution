#include <bits/stdc++.h>
using namespace std;
typedef long ll;
int main(){

string s;
cin>>s;        //azb
char start='a';
ll sum=0;
for(int i=0;i<s.size();i++){
   ll length1=abs(s[i]- start);

   ll length2=26-abs(length1);
   sum+=min(length1,length2);
   start=s[i];
}
cout<<sum<<endl;

}
