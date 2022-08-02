#include <iostream>

float funty_na_pln(float funty);    // funkcja zwraca kwotę w złotówkach
float pln_na_funty(float pln);     // funkcja zwraca kwotę w funtach
const float poundPrice = 5.51; // <-- Kurs funta 28.01.2022
bool leaveLoop = false;

int main()
{
	setlocale(LC_ALL, "pl_PL");
	while (leaveLoop == false)
	{
		std::cout << "Wybierz opcję numeryczną, potwierdzając enterem.\n [1]. Funt na Złoty \n [2]. Złoty na Funt \n [3]. Wyjdź \n Obecny kurs wymiany wynosi {poundPrice}\n Twój Wybór to:";
		int option;
		float amount;
		std::cin >> option;
		switch (option)
		{
		case 1:
			std::cout << "Proszę podać ilość funtów: ";
			std::cin >> amount;
			std::cout << "Za " << amount << " Funtów po obecnym kursie wymiany otrzyma się " << funty_na_pln(amount) << " Złoty \n";
			break;
		case 2:
			std::cout << "Proszę podać ilość funtów: ";
			std::cin >> amount;
			std::cout << "Za " << amount << " Złotych po obecnym kursie wymiany otrzyma się " << pln_na_funty(amount) << " Funtów \n";
			break;
		case 3:
			leaveLoop = true;
			break;
		default:
			std::cout << "Nieprawidłowy numer opcji. \n";
		}

	}

}

float funty_na_pln(float funty)
{
	return funty * poundPrice;
}

float pln_na_funty(float pln)
{
	return pln / poundPrice;
}
