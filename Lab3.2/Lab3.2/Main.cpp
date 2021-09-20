//	Main.cpp
//	Лісничук Арсен
//	Лабораторна робота №3.2
//	Варіант 13

#include <iostream>
#include <cmath>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Вхідні параметри
	double x;
	double a;
	double b;
	double c;

	// Вихідний параметр
	double F;

	std::cout << "x = "; std::cin >> x;
	std::cout << "a = "; std::cin >> a;
	std::cout << "b = "; std::cin >> b;
	std::cout << "c = "; std::cin >> c;

	if (x - 1 < 0 && b - x != 0)
	{
		F = a * x * x + b;
	}
	if (x - 1 > 0 && b + x == 0)
	{
		F = (x - a) / x;
	}
	if (!(x - 1 < 0 && b - x != 0) && !(x - 1 > 0 && b + x == 0))
	{
		F = x / c;
	}

	std::cout << "Розгалуження в короткій формі" << std::endl;
	std::cout << "1) F = " << F << std::endl;

	if (x - 1 < 0 && b - x != 0)
	{
		F = a * x * x + b;
	}
	else
	{
		if (x - 1 > 0 && b + x == 0)
			F = (x - a) / x;
		else 
			F = x / c;
	}

	std::cout << "Розгалуження в повній формі" << std::endl;
	std::cout << "2) F = " << F << std::endl;

	return 0;
}
