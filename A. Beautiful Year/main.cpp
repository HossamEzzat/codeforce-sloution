#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int year;
	cin >> year;
	for(year=year+1; true; year++){
		int d1 = year % 10; //3
		int d2 = (year / 10) % 10;
		int d3 = (year / 100) % 10;
		int d4 = year / 1000;
		if(d1!=d2 && d1!=d3 && d1!=d4 && d2!=d3 && d2!=d4 && d3!=d4)
			break;
	}
	cout << year;
	return 0;
}
