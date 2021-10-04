#include <iostream> //Подключил библиотеки
#include <iomanip>
#include <locale.h>
using namespace std;

#define ROWS 3 // Обозначил матрицу
#define COLUMNS 3

int main()
{
	setlocale(LC_ALL, "Russian");//Подключил русский язык
	int A[ROWS][COLUMNS];//Ввёл матрицу
	
	cout << "Заполнение массива случайными числами от 1 до 10: " << endl;//Вывожу на экран текст
	
	for (int i = 0; i < ROWS; i++) //Заполняем нашу матрицу
		for (int j = 0; j < COLUMNS; j++)
			A[i][j] = 1 + (rand() % 9);
			
	cout << "Массив:" << endl;//Выводим массив
	
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
			cout << setw(3) << A[i][j];
		cout << endl;
	}
	
	cin.get();
	cout << "Изменяем столбцы местами:" << endl;
	
	for (int i = 0; i < ROWS; i++)//Меняем столбцы местами
		for (int j = 0; j < COLUMNS; j++)
		{
			int buf = A[i][0];
			A[i][0] = A[i][1];
			A[i][1] = buf;
		}
		
	cout << "Массив:" << endl;
	
	for (int i = 0; i < ROWS; i++)//Выводим массив
	{
		for (int j = 0; j < COLUMNS; j++)
			cout << setw(3) << A[i][j];
		cout << endl;
	}
	
	return 0;
}
