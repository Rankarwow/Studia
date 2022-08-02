#include <iostream>
using namespace std;
//Symulator kolejki szczepien z uwzglednieniem wieku
_int64 pacjenciPesel[4][2] = { {45121210121,0},{33121102122,0},{47120912123,0},{37120812124,0}};
_int64 pacjenciSPlus[4][2];
_int64 pacjenciOPLus[4][2];
int currentStepS = 0;
int currentStepO = 0;
const _int64 DivideBy = 1000000000;
int main()
{
	
	for (int i = 0; i < 4 ; i ++)
	{
		pacjenciPesel[i][1] = pacjenciPesel[i][0] / DivideBy;
		if (pacjenciPesel[i][1] > 42 && pacjenciPesel[i][1] < 52)
		{
			pacjenciSPlus[currentStepS][0] = pacjenciPesel[i][0];
			pacjenciSPlus[currentStepS][1] = pacjenciPesel[i][1];
			currentStepS++;
		}
		else
		{
			pacjenciOPLus[currentStepO][0] = pacjenciPesel[i][0];
			pacjenciOPLus[currentStepO][1] = pacjenciPesel[i][1];
			currentStepO++;
		}
	}
	currentStepO = 1;
	currentStepS = 1;
	for (int j = 0; j < 4; j++)
	{
		if (pacjenciSPlus[j][1] > 0)
		{
			std::cout << "Pacjent 70+ numer " << currentStepS << "ma numer pesel " << pacjenciSPlus[j][0] << std::endl;
			currentStepS++;
		}
	}
	for (int j = 0; j < 4; j++)
	{
		if (pacjenciOPLus[j][1] > 0)
		{
			std::cout << "Pacjent 80+ numer " << currentStepO << "ma numer pesel " << pacjenciOPLus[j][0] << std::endl;
			currentStepO++;
		}
	}
}