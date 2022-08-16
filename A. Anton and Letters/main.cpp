#include <iostream>
using namespace std;

int main() {
	int cnt = 0;
	string s;
	getline(cin, s);

	for(int i=0; i<s.size(); i++){
		if(s[i] >= 'a' && s[i] <= 'z'){
			bool f = 1;
			for(int j=i+1; j<s.size(); j++){
				if(s[i] == s[j]){
					f = 0;
					break;
				}
			}
			if(f)
				cnt++;
		}
	}





	cout << cnt;
	return 0;
}



