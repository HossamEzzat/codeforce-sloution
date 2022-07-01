
//A Bit++

#include<iostream>
#include<string>  // for string
using namespace std;
int main()
{
	int n;
	cin >> n;
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		string str;
		cin >> str;
		if (str == "X++" || str == "++X")
			x++;
		else
			x--;
	}
	cout << x << endl;

}
