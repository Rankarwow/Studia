#include <iomanip>
#include <iostream>
#include <fstream>
float CelToKel(float st_Cel);
float CelToFahr(float st_Cel);


int main()
{
	std::ofstream out("Dane.txt"); // Wypis danych do pliku Dane txt
	std::cout.rdbuf(out.rdbuf());
	std::cout << "\tT[st.C]__T[K]_______T[st.F]" << std::endl;
	std::cout.setf(std::ios::fixed | std::ios::right); // formatowanie
	std::cout.precision(2);
	for (float T = -30; T < 40; T+=2)
	{
		std::cout << "\t"
			<< std::setw(3) << T << "____"
			<< std::setw(8) << std::setprecision(2) << CelToKel(T) << "____"
			<< std::setw(6) << std::setprecision(1) << CelToFahr(T) << std::endl;
	}
}
float CelToKel(float st_Cel)
{
	return 273.15 + st_Cel;
}
float CelToFahr(float st_Cel)
{
	return (9.0/5.0) * st_Cel + 32;
}
