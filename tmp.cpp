#include <iostream>
using namespace std;

int main(){
	int Cnt, In, Res = 1;
	while (In != 111){
		cin >> In;
		Res *= In;
	}
	cout << "Resultat -> " << Res << endl;
}
