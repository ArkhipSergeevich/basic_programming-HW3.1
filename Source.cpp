#include <iostream>

class calculator
{
public:
	double add();
	double multiply();
	double subtract_1_2();
	double subtract_2_1();
	double divide_1_2();
	double divide_2_1();
	bool set_num1(double num1);
	bool set_num2(double num2);
	void output();
private:
	double num1, num2;
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
		std::cout << "Введите делитель, отличный от нуля!\n";
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
		std::cout << "Введите делитель, отличный от нуля!\n";
	}
}
bool calculator::set_num1(double num1)
{
	if (num1 != 0)
	{
		this->num1 = num1;
		return true;
	}
	else
	{
		return false;
	}
		
}
bool calculator::set_num2(double num2)
{
	if (num2 != 0)
	{
		this->num2 = num2;
		return true;
	}
	else
	{
		return false;
	}
}
		
void calculator::output()
{
	std::cout << "Резуальтат сложения первого и вторго числа: " << add() << "\n";
	std::cout << "Резуальтат умножения первого и вторго числа: " << multiply() << "\n";
	std::cout << "Резуальтат вычитания второго числа из первого: " << subtract_1_2() << "\n";
	std::cout << "Резуальтат вычитания первого числа из второго: " << subtract_2_1() << "\n";
	std::cout << "Резуальтат деления первого числа на второе: " << divide_1_2() << "\n";
	std::cout << "Резуальтат деления вторго числа на первое: " << divide_2_1() << "\n";
	std::cout << "Резуальтат присвоения первому числу собсвенного ненулевого значения: " << set_num1(num1) << "\n";
	std::cout << "Резуальтат присвоения второму числу собсвенного ненулевого значения: " << set_num2(num2) << "\n";
}
int main()
{
	setlocale(LC_ALL, "Russian");
	calculator test;
	double num_1, num_2;
	while (true)
	{
		std::cout << "введите первое число\n";
		std::cin >> num_1;
		std::cout << "введите второе число\n";
		std::cin >> num_2;
		test.set_num1(num_1);
		while (test.set_num1(num_1) == false)
		{
			std::cout << "Введите отличное от нуля число!" << std::endl;
			std::cout << "введите первое число\n";
			std::cin >> num_1;
			test.set_num1(num_1);
		}
		test.set_num2(num_2);
		while (test.set_num2(num_2) == false)
		{
			std::cout << "Введите отличное от нуля число!" << std::endl;
			std::cout << "введите второе число\n";
			std::cin >> num_2;
			test.set_num2(num_2);
		}
		test.output();
		std::cout << "\n";
	}
}