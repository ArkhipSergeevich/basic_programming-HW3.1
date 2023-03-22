#include <iostream>

class calculator
{
public:
	double num1, num2;
	double add();
	double multiply();
	double subtract_1_2();
	double subtract_2_1();
	double divide_1_2();
	double divide_2_1();
	bool set_num1(double num1);
	bool set_num2(double num2);
	void input();
	void output();
};
double calculator::add()
{
	return num1 + num2;
}
double calculator::multiply()
{
	return num1 * num2;
}
double calculator::subtract_1_2()
{
	return num1 - num2;
}
double calculator::subtract_2_1()
{
	return num2 - num1;
}
double calculator::divide_1_2()
{
	double div;
	if (num2 != 0)
	{
		div = num1 / num2;
		return div;
	}
	else
	{
		std::cout << "������� ��������, �������� �� ����!\n";
	}
}
double calculator::divide_2_1()
{
	double div;
	if (num1 != 0)
	{
		div = num2 / num1;
		return div;
	}
	else
	{
		std::cout << "������� ��������, �������� �� ����!\n";
	}
}
bool calculator::set_num1(double num1)
{
	if (num1 != 0)
	{
		num1 = num1;
		return true;
	}
	else
		return false;
}
bool calculator::set_num2(double num2)
{
	if (num2 != 0)
	{
		num2 = num2;
		return true;
	}
	else
		return false;
}
void calculator::input()
{
	std::cout << "������� ������ �����\n";
	std::cin >> num1;
	std::cout << "������� ������ �����\n";
	std::cin >> num2;
}
void calculator::output()
{
	std::cout << "���������� �������� ������� � ������ �����: " << add() << "\n";
	std::cout << "���������� ��������� ������� � ������ �����: " << multiply() << "\n";
	std::cout << "���������� ��������� ������� ����� �� �������: " << subtract_1_2() << "\n";
	std::cout << "���������� ��������� ������� ����� �� �������: " << subtract_2_1() << "\n";
	std::cout << "���������� ������� ������� ����� �� ������: " << divide_1_2() << "\n";
	std::cout << "���������� ������� ������ ����� �� ������: " << divide_2_1() << "\n";
	std::cout << "���������� ���������� ������� ����� ����������� ���������� ��������: " << set_num1(num1) << "\n";
	std::cout << "���������� ���������� ������� ����� ����������� ���������� ��������: " << set_num2(num2) << "\n";
}
int main()
{
	setlocale(LC_ALL, "Russian");
	calculator test;
	while (true)
	{
		test.input();
		test.output();
		std::cout << "\n";
	}
}