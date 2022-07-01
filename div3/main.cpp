#include <iostream>

using namespace std;

int main()
{
    int blocks;
    int third;
    int remain;
    int second;
    int first;
    int t;
    cin>>t;
    while(t--){
            cin>>blocks;
        if(blocks%3==0){
            cout<<blocks/3<<" "<<(blocks/3)+1<<" "<<(blocks/3)-1<<endl;
        }
        else if(blocks%3==1){
             cout<<blocks/3<<" "<<(blocks/3)+2<<" "<<(blocks/3)-1<<endl;
        }
        else{
             cout<<(blocks/3) +1<<" "<<(blocks/3)+2<<" "<<(blocks/3)-1<<endl;
        }
    }
}
