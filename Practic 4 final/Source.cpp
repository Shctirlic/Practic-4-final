#include <iostream>
#include <cmath> 
using namespace std;

//Функция задачи 1.
template <typename T>
void clear_arr(T mass[], int length, T key) {
	for (int i = 0; i < length; i++)
		if (mass[i] == key)
			mass[i] = 0;
}
//Функция задачи 2.
int  index_sum(int m1[], int  n1, int m2[], int  n2, int index) {
	if (index > (n1 - 1) || index > (n2 - 1))
	{
		cout << "ERROR" << endl;
		return 0;
	}
	else
		return m1[index] + m2[index];

}

//Функция задачи 3.
template<typename T>
float mean_arr(T m[], int n) {
	T min = m[0];
	T max = m[0];

	for (int i = 0; i < n; i++) {
		if (m[i] < min)
			min = m[i];
		if (m[i] > max)
			max = m[i];
	}
	return  (max + min) / 2.0f;
}

//Функция задачи 4.
bool is_prime_number(int a) {
	for (int i = 2; i < a; i++)
	{
		if (a % i == 0) return false;
	}

	return true;
}

void prime_range(int a, int b)
{
	for (int i = a; i <= b; i++)
	{
		if (is_prime_number(i) == true)
		{
			cout << i << "\n";
		}
	}
	cout << endl;

}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	//Задача 1.
	int arr[] = { 2, 3, 5, 3 };
	clear_arr <int>(arr, 4, 3);

	cout << "Задача 1.\n";

	cout << "Исправленный массив: " << "\n";
	for (int i = 0; i < 4; i++)
		cout << arr[i] << " ";

	char mass1[] = { 'm', 'b', 't', 'u', 'r' };

	clear_arr(mass1, 5, 't');

	cout << "\n";

	cout << "Исправленный массив: " << "\n";
	for (int i = 0; i < 5; i++)
		cout << mass1[i] << " ";
	cout << "\n";

	//задача 2.
	int m1[] = { 1, 2, 5, 1, 5, 1 };
	int n1 = sizeof(m1) / sizeof(m1[0]);
	int m2[] = { 0, 1, 0 };
	int n2 = sizeof(m1) / sizeof(m1[0]);
	cout << "Задача 2.\n";
	cout << "Сумма элементов массива под указанным индексом = " << index_sum(m1, n1, m2, n2, 1) << "\n";

	//Задача 3.
	int   m3[] = { 1, 2, 5, 1, 50, 1 };
	int   n3 = sizeof(m3) / sizeof(m3[0]);
	cout << "Задача 3.\n";
	cout << "Среднее арифметическое минимального и максимального элемента в массиве:\n" << mean_arr(m3, n3) << endl;

	//задача 4.
	cout << "Задача 4.\n";
	cout << "Простые числа в диапазоне от 8 до 24\n";
	prime_range(8, 24);

	return 0;
}