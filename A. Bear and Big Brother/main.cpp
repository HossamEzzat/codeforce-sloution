#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a, b, cnt = 0;
	cin >> a >> b;
	while(a <= b){
		cnt ++;
		a *= 3;
		b *= 2;
	}
	cout << cnt;
	return 0;
}
