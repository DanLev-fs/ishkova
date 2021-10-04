#include <iostream>
using namespace std;

int mass[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};


int main(){
	int tmp;
	for (int i = 0; i < 3; i++){
		tmp = mass[i][0];
		mass[i][1] = mass[i][0];
		mass[i][0] = tmp;
	}
}
