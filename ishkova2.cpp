#include <iostream>
using namespace std;

int main(){
	int inNumbers, tmp, count = 1;
	cout << "Input 5 numbers" << endl;
	for (int i = 1; i <= 5; i++){
		cin >> inNumbers;
		if (i == 1) tmp = inNumbers;
		if (inNumbers < tmp) {
			tmp = inNumbers;
			count = i;
		}
	}
	cout << endl << "Minimal number -> " << tmp << endl << "Position -> " << count << endl;
}
