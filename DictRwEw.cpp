#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void save(string fname, string payload) {
	ofstream writer;
	writer.open(fname, ios::app);
	writer << payload << endl;
	writer.close();
}

void load(string fname, string payload) {
	ifstream reader;
	reader.open(fname);
	string dateG;
	while (getline(reader, dateG)) {
		char* date = (char*)dateG.c_str();
		string rWord, eWord;
		bool spliter = false;
		for (int i = 0; i < strlen(date); i++) {
			if (date[i] == '-') {
				spliter = true;
				continue;
			}
			if (!spliter)
				rWord += date[i];
			else eWord += date[i];
		}
		if (rWord == payload) {
			cout << eWord << endl;
			break;
		}
	}
	reader.close();
}

int main()
{
	setlocale(LC_ALL, "");
	int vol = 0;
	cout << "1) save\n2) load" << endl;
	cin >> vol;
	if (vol == 1) {
		cout << "Enter Russian word" << endl;
		string payload, payload1;
		cin >> payload;
		payload += "-";
		cout << "Enter English word" << endl;
		cin >> payload1;
		payload += payload1;
		save("test.dat", payload);
	}
	else if (vol == 2) {
		cout << "Enter Russian word" << endl;
		string payload;
		cin >> payload;
		load("test.dat", payload);
	}
}
