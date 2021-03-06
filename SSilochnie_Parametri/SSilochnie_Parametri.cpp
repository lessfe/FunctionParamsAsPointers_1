#include <iostream>
using namespace std;

void Foo(int a)
{
	a = 1;
}

void Foo2(int &a) // Сюда мы передаем адресс переменной.
{
	a = 2;
}

void Foo3(int *a)
{
	*a = 3;
}

void main()
{
	int value = 5;
	cout << "value = " << value << endl;
	// ------------------------------------------------------------------------ // 

	cout << "Foo = " << value << endl;
	Foo(value); // Тут фкнкция принимает параметр со значением 5, но внутри функция работает с локальной переменной.
	// Поэтому на выводе мы получим тоже значение value, что мы и отправляли. 
	cout << "value = " << value << endl;

	// ------------------------------------------------------------------------ // 

	cout << "Foo2 = " << value << endl;
	Foo2(value); // Тут мы передаем параметр по ссылке. Функция заглядывает в переменную и уже напряимую меняет ей данные.
	// В итоге мы получим на выводе value = 2;
	cout << "value = " << value << endl;

	// ------------------------------------------------------------------------ // 

	cout << "Foo3 = " << value << endl;
	Foo3(&value); //  int *a = &value; // 

	cout << "value = " << value << endl;

}