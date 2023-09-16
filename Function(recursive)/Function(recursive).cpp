#include <iostream>
using namespace std;

void Task4(int n)
{
	if (n <= 0)
	{
		return;
	}
	cout << '*';
	Task4(n-1);
}

void Task5(int n)
{
	if (n <= 0)
	{
		return;
	}
	cout << n << " ";
	Task5(n-1);
}

int main()
{
	//Task1,Task2,Task3 сделал и скинул во время пар.
	//Task4 Написать рекурсивную функцию, которая выводит N звезд в ряд, число N задает пользователь. Проиллюстрируйте работу функции примером.
	Task4(5);
	//Task5 Напишите рекурсивную функцию для вывода на экран всех целых чисел от 1 до n.
	Task5(5);
}
