#include <iostream>
//Prosty symulator kasy
enum class Nominaly
{
	Grosz,
	DwaGrosze,
	PiecGroszy,
	DziesiecGroszy,
	DwadziesciaGroszy,
	PiecdziesiatGroszy,
	Zloty,
	DwaZlote,
	PiecZlotych,
	DziesiecZlotych,
	DwadziesciaZlotych,
	PiecdziesiatZlotych,
	StoZlotych,
	DwiescieZlotych,
	PiecsetZlotych,
};
enum class TypOperacji
{
	Dodaj,
	Odejmij
};
class Kasa {
	bool KasaOtwarta = false;
	int Grosz = 0;
	int DwaGrosze = 0;
	int PiecGroszy = 0;
	int DziesiecGroszy = 0;
	int DwadziesciaGroszy = 0;
	int PiecdziesiatGroszy = 0;
	int Zloty = 0;
	int DwaZlote = 0;
	int PiecZlotych = 0;
	int DziesiecZlotych = 0;
	int DwadziesciaZlotych = 0;
	int PiecdziesiatZlotych = 0;
	int StoZlotych = 0;
	int DwiescieZlotych = 0;
	int PiecsetZlotych = 0;
public:
	void OtworzKase()
	{
		KasaOtwarta = true;
	}
	void ZamknijKase()
	{
		KasaOtwarta = false;
	}
	bool CzyKasaOtwarta()
	{
		return KasaOtwarta;
	}
	void ZmienStanKasy(Nominaly nominal, TypOperacji operacja, int liczbaNominalow)
	{
		switch (nominal)
		{
		case Nominaly::Grosz:
			if (operacja == TypOperacji::Dodaj)
			{
				Grosz += liczbaNominalow;
			}
			else
			{
				if (Grosz - liczbaNominalow > 0)
				{
					Grosz -= liczbaNominalow;
				}
				else
				{
					std::cout << "W kasie jest za mało danego nominalu" << std::endl;
				}
			}
			break;
		case Nominaly::DwaGrosze:
			if (operacja == TypOperacji::Dodaj)
			{
				DwaGrosze += liczbaNominalow;
			}
			else
			{
				if (DwaGrosze - liczbaNominalow > 0)
				{
					DwaGrosze -= liczbaNominalow;
				}
				else
				{
					std::cout << "W kasie jest za mało danego nominalu" << std::endl;
				}
			}
			break;
		case Nominaly::PiecGroszy:
			if (operacja == TypOperacji::Dodaj)
			{
				PiecGroszy += liczbaNominalow;
			}
			else
			{
				if (PiecGroszy - liczbaNominalow > 0)
				{
					PiecGroszy -= liczbaNominalow;
				}
				else
				{
					std::cout << "W kasie jest za mało danego nominalu" << std::endl;
				}
			}
			break;
		case Nominaly::DziesiecGroszy:
			if (operacja == TypOperacji::Dodaj)
			{
				DziesiecGroszy += liczbaNominalow;
			}
			else
			{
				if (DziesiecGroszy - liczbaNominalow > 0)
				{
					DziesiecGroszy -= liczbaNominalow;
				}
				else
				{
					std::cout << "W kasie jest za mało danego nominalu" << std::endl;
				}
			}
			break;
		case Nominaly::DwadziesciaGroszy:
			if (operacja == TypOperacji::Dodaj)
			{
				DwadziesciaGroszy += liczbaNominalow;
			}
			else
			{
				if (DwadziesciaGroszy - liczbaNominalow > 0)
				{
					DwadziesciaGroszy -= liczbaNominalow;
				}
				else
				{
					std::cout << "W kasie jest za mało danego nominalu" << std::endl;
				}
			}
			break;
		case Nominaly::PiecdziesiatGroszy:
			if (operacja == TypOperacji::Dodaj)
			{
				PiecdziesiatGroszy += liczbaNominalow;
			}
			else
			{
				if (PiecdziesiatGroszy - liczbaNominalow > 0)
				{
					PiecdziesiatGroszy -= liczbaNominalow;
				}
				else
				{
					std::cout << "W kasie jest za mało danego nominalu" << std::endl;
				}
			}
			break;
		case Nominaly::Zloty:
			if (operacja == TypOperacji::Dodaj)
			{
				Zloty += liczbaNominalow;
			}
			else
			{
				if (Zloty - liczbaNominalow > 0)
				{
					Zloty -= liczbaNominalow;
				}
				else
				{
					std::cout << "W kasie jest za mało danego nominalu" << std::endl;
				}
			}
			break;
		case Nominaly::DwaZlote:
			if (operacja == TypOperacji::Dodaj)
			{
				DwaZlote += liczbaNominalow;
			}
			else
			{
				if (DwaZlote - liczbaNominalow > 0)
				{
					DwaZlote -= liczbaNominalow;
				}
				else
				{
					std::cout << "W kasie jest za mało danego nominalu" << std::endl;
				}
			}
			break;
		case Nominaly::PiecZlotych:
			if (operacja == TypOperacji::Dodaj)
			{
				PiecZlotych += liczbaNominalow;
			}
			else
			{
				if (PiecZlotych - liczbaNominalow > 0)
				{
					PiecZlotych -= liczbaNominalow;
				}
				else
				{
					std::cout << "W kasie jest za mało danego nominalu" << std::endl;
				}
			}
			break;
		case Nominaly::DziesiecZlotych:
			if (operacja == TypOperacji::Dodaj)
			{
				DziesiecZlotych += liczbaNominalow;
			}
			else
			{
				if (DziesiecZlotych - liczbaNominalow > 0)
				{
					DziesiecZlotych -= liczbaNominalow;
				}
				else
				{
					std::cout << "W kasie jest za mało danego nominalu" << std::endl;
				}
			}
			break;
		case Nominaly::DwadziesciaZlotych:
			if (operacja == TypOperacji::Dodaj)
			{
				DwadziesciaZlotych += liczbaNominalow;
			}
			else
			{
				if (DwadziesciaZlotych - liczbaNominalow > 0)
				{
					DwadziesciaZlotych -= liczbaNominalow;
				}
				else
				{
					std::cout << "W kasie jest za mało danego nominalu" << std::endl;
				}
			}
			break;
		case Nominaly::PiecdziesiatZlotych:
			if (operacja == TypOperacji::Dodaj)
			{
				PiecdziesiatZlotych += liczbaNominalow;
			}
			else
			{
				if (PiecdziesiatZlotych - liczbaNominalow > 0)
				{
					PiecdziesiatZlotych -= liczbaNominalow;
				}
				else
				{
					std::cout << "W kasie jest za mało danego nominalu" << std::endl;
				}
			}
			break;
		case Nominaly::StoZlotych:
			if (operacja == TypOperacji::Dodaj)
			{
				StoZlotych += liczbaNominalow;
			}
			else
			{
				if (StoZlotych - liczbaNominalow > 0)
				{
					StoZlotych -= liczbaNominalow;
				}
				else
				{
					std::cout << "W kasie jest za mało danego nominalu" << std::endl;
				}
			}
			break;
		case Nominaly::DwiescieZlotych:
			if (operacja == TypOperacji::Dodaj)
			{
				DwiescieZlotych += liczbaNominalow;
			}
			else
			{
				if (DwiescieZlotych - liczbaNominalow > 0)
				{
					DwiescieZlotych -= liczbaNominalow;
				}
				else
				{
					std::cout << "W kasie jest za mało danego nominalu" << std::endl;
				}
			}
			break;
		case Nominaly::PiecsetZlotych:
			if (operacja == TypOperacji::Dodaj)
			{
				PiecsetZlotych += liczbaNominalow;
			}
			else
			{
				if (PiecsetZlotych - liczbaNominalow > 0)
				{
					PiecsetZlotych -= liczbaNominalow;
				}
				else
				{
					std::cout << "W kasie jest za mało danego nominalu" << std::endl;
				}
			}
			break;
		default:
			break;
		}
	}
	void PodajStanKasy()
	{
		int Zlote = SumujZlote();
		int Grosze = SumujGrosze();
		if (Grosze > 100)
		{
			Zlote += Grosze / 100;
			Grosze = Grosze % 100;
		}
		std::cout << "Stan kasy wynosi: " << Zlote << " Zlote i " << Grosze << " Groszy" << std::endl;

	}
	int SumujZlote()
	{
		int stanKasyZlote =
			1 * Zloty +
			2 * DwaZlote +
			5 * PiecZlotych +
			10 * DziesiecZlotych +
			20 * DwadziesciaZlotych +
			50 * PiecdziesiatZlotych +
			100 * StoZlotych +
			200 * DwiescieZlotych +
			500 * PiecsetZlotych;
		return stanKasyZlote;
	}
	int SumujGrosze()
	{
		int StanKasyGrosze =
			1 * Grosz +
			2 * DwaGrosze +
			5 * PiecGroszy +
			10 * DziesiecGroszy +
			20 * DwadziesciaGroszy +
			50 * PiecdziesiatGroszy;
		return StanKasyGrosze;
	}

};

int main()
{
	setlocale(LC_CTYPE, "Polish");
	bool Kontynuuj = true;
	Kasa k = Kasa();
	while (Kontynuuj)
	{
		int opcje;
		std::cout << "Wybierz Opcje" << std::endl;
		std::cout << "1. Otworz Kase" << std::endl;
		std::cout << "2. Zamknij Kase" << std::endl;
		std::cout << "3. Zmien Stan Kasy" << std::endl;
		std::cout << "4. Podaj Stan Kasy" << std::endl;
		std::cout << "5. Wyjdź" << std::endl;
		std::cin >> opcje;
		if (opcje == 1)
		{
			k.OtworzKase();
		}
		if (opcje == 2)
		{
			k.ZamknijKase();
		}
		if (opcje == 3)
		{
			if (k.CzyKasaOtwarta() == true) {
				TypOperacji typOperacji;
				Nominaly Nominal;
				int IloscNominalu;
				int opcja;
				std::cout << "Wybierz Opcje" << std::endl;
				std::cout << "1. Dodaj " << std::endl;
				std::cout << "2. Odejmij " << std::endl;
				std::cout << " Wybór: " << std::endl;
				std::cin >> opcja;
				if (opcja == 1)
				{
					typOperacji = TypOperacji::Dodaj;
				}
				else
				{
					typOperacji = TypOperacji::Odejmij;
				}
				std::cout << "Wybierz Nominal " << std::endl;
				std::cout << "1. Grosz" << std::endl;
				std::cout << "2. Dwa Grosze" << std::endl;
				std::cout << "3. Piec Groszy" << std::endl;
				std::cout << "4. Dziesiec Groszy" << std::endl;
				std::cout << "5. Dwadziescia Groszy" << std::endl;
				std::cout << "6. Piecdziesiat Groszy" << std::endl;
				std::cout << "7. Jeden Zloty" << std::endl;
				std::cout << "8. Dwa Zlote" << std::endl;
				std::cout << "9. Piec Zlote" << std::endl;
				std::cout << "10. Dziesiec Zlotych" << std::endl;
				std::cout << "11. Dwadziescia Zlotych" << std::endl;
				std::cout << "12. Piecdziesiat Zlotych" << std::endl;
				std::cout << "13. Sto Zlotych" << std::endl;
				std::cout << "14. Dwiescie Zlotych" << std::endl;
				std::cout << "15. Piecset Zlotych" << std::endl;
				std::cout << "Wybór: " << std::endl;
				std::cin >> opcja;
				if (opcja == 1)
				{
					Nominal = Nominaly::Grosz;
				}
				else if (opcja == 2)
				{
					Nominal = Nominaly::DwaGrosze;
				}
				else if (opcja == 3)
				{
					Nominal = Nominaly::PiecGroszy;
				}
				else if (opcja == 4)
				{
					Nominal = Nominaly::DziesiecGroszy;
				}
				else if (opcja == 5)
				{
					Nominal = Nominaly::DwadziesciaGroszy;
				}
				else if (opcja == 6)
				{
					Nominal = Nominaly::PiecdziesiatGroszy;
				}
				else if (opcja == 7)
				{
					Nominal = Nominaly::Zloty;
				}
				else if (opcja == 8)
				{
					Nominal = Nominaly::DwaZlote;
				}
				else if (opcja == 9)
				{
					Nominal = Nominaly::PiecZlotych;
				}
				else if (opcja == 10)
				{
					Nominal = Nominaly::DziesiecZlotych;
				}
				else if (opcja == 11)
				{
					Nominal = Nominaly::DwadziesciaZlotych;
				}
				else if (opcja == 12)
				{
					Nominal = Nominaly::PiecdziesiatZlotych;
				}
				else if (opcja == 13)
				{
					Nominal = Nominaly::StoZlotych;
				}
				else if (opcja == 14)
				{
					Nominal = Nominaly::DwiescieZlotych;
				}
				else if (opcja == 15)
				{
					Nominal = Nominaly::PiecsetZlotych;
				}
				std::cout << "Ilosc nominalu" << std::endl;
				std::cout << "Podaj Ilosc: " << std::endl;
				std::cin >> IloscNominalu;
				k.ZmienStanKasy(Nominal, typOperacji, IloscNominalu);
			}
			else
			{
				std::cout << " Otworz Kase przed operacją " << std::endl;
			}
		}
		if (opcje == 4)
		{
			k.PodajStanKasy();
		}
		if (opcje == 5)
		{
			Kontynuuj = false;
		}
	}
}