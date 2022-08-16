#include <iostream>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin >> s;
	int a, b, c;
	a = b = c = 0;
	for(int i=0; i<s.size(); i++)
		if(s[i] == '1')
			a++;
		else if(s[i] == '2')
			b++;
		else if(s[i] == '3')
			c++;
	for(int i=0; i<s.size(); i++)
		if(s[i] == '+')
			cout << '+';
		else if(a > 0){
			cout << 1;
			a--;
		}else if(b > 0){
			cout << 2;
			b--;
		}else{
			cout << 3;
			c--;
		}

	return 0;
}




