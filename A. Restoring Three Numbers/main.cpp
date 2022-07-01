#include<bits/stdc++.h>

using namespace std;

/// Typedef
typedef long long ll;


int main() {





    ll arr[4];

    for(ll i = 0; i < 4; i++){
        cin>>arr[i];
    }

    sort(arr, arr + 4);

    ll a = arr[3] - arr[0];
    ll b = arr[3] - arr[1];
    ll c = arr[3] - arr[2];

    cout << a << " " << b << " " << c << endl;


    return 0;
}
