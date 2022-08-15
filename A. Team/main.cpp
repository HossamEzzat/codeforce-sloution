#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, vote, cnt = 0, x;
	cin >> n;
	for(int i=0; i<n; i++){
		vote = 0;
		for(int i=0; i<3; i++){
			cin >> x;


			if(x == 1)
				vote++;

		}
		if(vote > 1)
			cnt ++;
	}
	cout << cnt;
	return 0;
}
