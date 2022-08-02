#include <iostream>
//Symulator zmiany wysokości/wielkości balonika
class Balonik
{
private:
    std::string nazwa;
    float  wysokosc;
    float srednica;
public:
    Balonik(std::string nazwaBalonika)
    {
        nazwa = nazwaBalonika;
        wysokosc = 0;
        srednica = 0;
    }
    void zmien_wysokosc(int zmianaWysokosci)
    {
        if (zmianaWysokosci > 0)
        {
            wysokosc += zmianaWysokosci;
        }else
        {
            if (wysokosc - zmianaWysokosci > 0)
            {
                wysokosc -= zmianaWysokosci;
            }
            else
            {
                std::cout << "Zmiana nie może zmienic wartości poniżej 0";
            }
            
        }
    }
    void zmien_srednice(int zmianaSrednicy)
    {
        if (zmianaSrednicy > 0)
        {
            srednica += zmianaSrednicy;
        }
        else
        {
            if (srednica - zmianaSrednicy > 0)
            {
                srednica -= zmianaSrednicy;
            }
            else
            {
                std::cout << "Zmiana nie może zmienic wartości poniżej 0";
            }         
        }
        
    }   
    void StanBalonika()
    {
        std::cout << "Balonik " << nazwa << " jest na wysokosci " << wysokosc << " i ma srednice " << srednica << "cm" << std::endl;
    }
};
void Pompuj(Balonik &balonik, float ileNapompowac) // pi * r * r 
{

    balonik.zmien_srednice(3.14 * ileNapompowac * ileNapompowac);
}
int main()
{
    Balonik Czerwony = Balonik("Czerwony");
    Balonik Zielony = Balonik("Zielony");
    Balonik Niebieski = Balonik("Niebieski");
    Pompuj(Zielony, 5);
    Zielony.zmien_wysokosc(50);
    Zielony.StanBalonika();
    Pompuj(Czerwony, 2);
    Czerwony.zmien_wysokosc(5);
    Czerwony.StanBalonika();
    Pompuj(Niebieski, 2.7);
    Niebieski.zmien_wysokosc(20);
    Niebieski.StanBalonika();
}



