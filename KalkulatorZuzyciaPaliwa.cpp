#include <iostream>

float obl_zasięg(float* ile_paliwa, float* spalanie);    // funkcja zwraca zasięg [km]
void menu(float* ile_paliwa, float* spalanie);		// Menu programu
bool continueLoop();

int main()
{
	setlocale(LC_ALL, "pl_PL");
	float* a = new float;
	float* b = new float;
	std::cout << "Program oblicza droge jaka przejedziesz na paliwie. \n";
	while (true)
	{
		menu(a,b);
		std::cout << "Na " << *a << "L paliwa przejedziesz " << obl_zasięg(a, b) << "km\n";
		if (!continueLoop()) break;
	}
}
void menu(float* ile_paliwa, float* spalanie)
{
	std::cout << "Podaj ile jest paliwa w zbiorniku [L]:\n";
	std::cin >> *ile_paliwa;
	std::cout << "Podaj srednie zuzycie paliwa [L/100km]: \n";
	std::cin >> *spalanie;
}
bool continueLoop()
{
	char temp;
	std::cout << "Kontynuować działanie programu (Y/N)? \n";
	std::cin >> temp;
	if (temp == 'Y')
	{
		return true;
	}
	return false;
}
float obl_zasięg(float* ile_paliwa, float* spalanie)
{
	return (*ile_paliwa / *spalanie) * 100;
}
