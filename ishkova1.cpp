#include <iostream>
using namespace std;

int main(){
	int num;
	cout << "Input number" << endl << "-> ";
	cin >> num;
	if ((num % 10 == 5) || (num / 10 == 5)) cout << "Exist" << endl;
	else cout << "Not exist" << endl;
}
