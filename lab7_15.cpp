#include <iostream>
#include <fstream>
using namespace std;

#define n 5

void input_matr(int a[n][n])		// Функция записи массива с клавиатуры
{
	cout << "Введите элементы массива \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "элемент[" << i << "," << j << "]: ";
			cin >> a[i][j];
		}
	}
}

void input_file(int a[n][n])		// Функция записи массива из файла
{
	ifstream f("matr.txt");
	if (!f.is_open())		// Проверка открытия файла
	{
		cout << "Ошибка открытия файла!" << endl;
	}
	else
	{
		cout << "Файл открыт!" << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				f >> a[i][j];
			}
		}
	}
	f.close();		// Закрытие файла
}


void mas_x_y(int a[n][n], int y, int x[])		// Функция вывода выполненной работы программы
{
	int i, j, l;
	cout << "Ваш массив: \n";
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
			if (j % 5 == 4)
			{
				cout << "\n";
			}
		}
	}
	cout << "Массив x: \n";
	for (l = 0; l < n; l++)
	{
		cout << x[l] << " ";
	}
	cout << "\n";
	cout << "y=" << y;
	ofstream f("rezalt.txt");
	if (!f.is_open())
	{
		cout << "Ошибка открытия файла!" << endl;
	}
	else
	{
		f << "Ваш массив: \n";
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				f << a[i][j] << " ";
				if (j % 5 == 4)
				{
					f << "\n";
				}
			}
		}
		f << "Массив x: \n";
		for (l = 0; l < n; l++)
		{
			f << x[l] << " ";
		}
		f << "\n";
		f << "y=" << y;
	}
	f.close();
}