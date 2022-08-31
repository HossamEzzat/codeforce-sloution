#include<iostream>
using namespace std;
long long t,n,m,x,row,col;
int main(){


    cin>>t;
    while(t--){


        cin>>n>>m>>x;
        col = x / n + 1;
        row = x % n;
        if(row == 0)
            --col,row = n;
        cout<<(row - 1) * m + col<<"\n";
    }
    return 0;
}
