#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x, y, cell;
	for(int i = 1; i<=5; i++){
		for(int j = 1; j<=5; j++){
			cin >> cell;
			if(cell == 1){
				x = i;
				y = j;
			}
		}
	}
	int dis_x = x - 3;
	int dis_y = y - 3;
	if(dis_x < 0)
		dis_x *= -1;
	if(dis_y < 0)
		dis_y *= -1;
	cout << dis_x + dis_y;
	return 0;
}
