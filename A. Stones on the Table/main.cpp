#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string color;
    cin>>color;
    int sol =0;
    for (int i=0;i<n;i++){
        if(color[i]==color[i+1]){
            sol+=1;
        }
    }
    cout<<sol<<endl;
    return 0;
}
