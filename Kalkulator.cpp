#include <iostream>
void launchMenu();
float dzialanie(float &a, float &b, char &oper);
void assignA();
void assignB();
void assignBDivision();
void assignOperator();
float* a = new float;
float* b = new float;
char* oper = new char;
int main()
{
	setlocale(LC_ALL, "pl_PL");
	launchMenu();
}

void launchMenu()
{
	while (true)
	{
		assignA();
		assignB();
		assignOperator();
		std::cout << "Wynik dzialania to: " << dzialanie(*a, *b, *oper) << std::endl;
		std::cout << "Kontynuować? T/N" << std::endl;
		char cont;
		std::cin >> cont;
		if (cont == 'T')
		{
			continue;
		}
		else
		{
			break;
		}
	}
}

float dzialanie(float &a, float &b, char &oper)
{
	switch (oper)
	{
	case '+':
		return a + b;
		break;
	case '-':
		return a - b;
		break;
	case '*':
		return a * b;
		break;
	case 'x':
		return a * b;
		break;
	case '/':
		if (b == 0)
		{
			assignBDivision();
		}
		return a / b;
		break;
	case ':':
		if (b == 0)
		{
			assignBDivision();
		}
		return a / b;
		break;
	default:
		return 0;
	}
}

void assignA()
{
	std::cout << "Wprowadź zmienną A" << std::endl;
	std::cin >> *a;
}

void assignB()
{
	std::cout << "Wprowadź zmienną B" << std::endl;
	std::cin >> *b;
}
void assignBDivision()
{
	std::cout << "Wartość B nie może być równa 0 w przypadku dzielenie, wprowadź ponownie" << std::endl;
	std::cout << "Wprowadź zmienną B" << std::endl;
	std::cin >> *b;
	if (b == 0)
	{
		assignBDivision();
	}
}

void assignOperator()
{
	std::cout << "Wprowadź typ działania" << std::endl;
	std::cout << "Dodawanie(+) Odejmowanie(-) Mnożenie(* lub x) Dzielenie(/ lub :)" << std::endl;
	char temp;
	std::cin >> temp;
	if (temp == '+' || temp == '-' || temp == '*' || temp == 'x' || temp == '/' || temp == ':')
	{
		*oper = temp;
	}
	else
	{
		assignOperator();
	}
}
