
#include <iostream>

using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    int avg=0; //find avg of all elements
    for(int i=0;i<n;i++){
        cin>>a[i];
        avg+=a[i];
    }
    //if total candies canot divided properly then avg will be in decimal so output -1
    if(avg%n!=0){
        cout<<-1<<"\n";
        return ;
    }

    avg=avg/n; //takes avg

    int ans=0; //stores answer
    for(int i=0;i<n;i++){
        if(a[i]>avg) ans++; // if a[i] has candies greater then avg then it will give theri candies so ans++
    }
    cout<<ans<<"\n";

}
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;//number of test-cases
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
