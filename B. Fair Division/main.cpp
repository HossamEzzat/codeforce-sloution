#include <iostream>

using namespace std;

int t, n, num, one_cnt, two_cnt;;

int main () {
    cin>>t;

    for(int test_case=1; test_case<=t; test_case++) {
        cin>>n;

        one_cnt = two_cnt = 0;

        for(int i=0; i<n; i++) {
            cin>>num;;
            if(num == 1) one_cnt++;
            else two_cnt++;
        }

        int total_sum = one_cnt * 1 + two_cnt * 2;
        if(total_sum % 2 == 1) {
            cout<<"No"<<endl;
        }
        else {
            int half = total_sum / 2;

            int two_count = half / 2;
            int one_count = half - two_count * 2;

            if(two_count <= two_cnt && one_count <= one_cnt) {
                  cout<<"Yes"<<endl;
            }
            else {

                int one_count = half / 1;
                int two_count = half - one_count * 1;

                if(two_count <= two_cnt && one_count <= one_cnt) {
                     cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
            }


        }
    }
}
