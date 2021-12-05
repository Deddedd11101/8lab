// 1zad.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include < stdio.h>
#include <Windows.h>
using namespace std;
constexpr auto N1 = 3;
constexpr auto N2 = 3;
void get_arr( int(&arr)[N1][N2]);
//void print_arr(int(&arr)[N1][N2], int len);
void print_arr_second(int(&arr)[N1][N2], int len, int len2 , int n );
int main()
{
	int arr[N1][N2];
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	get_arr(arr);
	//print_arr(arr, len); 
	int N;
	N = N1;
	print_arr_second(arr, N1, N2, N);
	return 0;
}
void get_arr( int(&arr)[N1][N2])
{
	cout << "Введите элементы массивa: ";
	for(int i=0; i<N1; i++)
	{
		for (int j = 0; j < N2; j++)
		{
			cout << "\na[" << i << "][" << j << "]= ";
			cin >> arr[i][j];
		}
	}
}
/*void print_arr(int(&arr)[N1][N2], int len)
{
	cout << "Элементы массива получили значения значения:\n";
	for (int i = 0; i < N1; i++) {
		for (int j = 0; j < N2; j++)
			std::cout << " arr["<<i<<"]["<<j<<"]= "<< arr[i][j];
		std::cout << std::endl;
	}
}*/
void print_arr_second(int(&arr)[N1][N2], int len, int len2, int n)
{
	
	cout << "Элементы массива получили значения значения:\n";
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len2; j++)
			std::cout << " arr[" << i << "][" << j << "]= " << arr[i][j];
		std::cout << std::endl;
	}

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
