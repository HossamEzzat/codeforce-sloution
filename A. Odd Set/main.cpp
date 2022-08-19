#include <iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    for(int i=1; i<=t; i++){

        int n;
         cin>>n;
        int odd = 0;

        for(int i=1; i<=2*n; i++){
            int in; cin>>in;
            if(in % 2 != 0){
                odd++;
            }
        }
        if(odd == n)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
