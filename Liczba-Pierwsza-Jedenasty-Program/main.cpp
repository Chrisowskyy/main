#include <iostream>

using namespace std;

unsigned czy_pierwsza(unsigned long long liczba)
{
      if(liczba < 2)
            return 0;
      else
            for(unsigned dzielnik = 2; dzielnik * dzielnik <= liczba; dzielnik++)
                  if(liczba % dzielnik == 0)
                        return dzielnik;
                  return 1;
}

int main()
{
      cout << "Podaj liczbe naturalna: ";
      unsigned long long liczba;
      cin >> liczba;
      unsigned wynik = czy_pierwsza(liczba);
      if(wynik== 1)
             cout << liczba << " Jest liczba pierwsza.\n";
      else if (wynik  == 0 )
            cout << liczba << " Nie jest liczba pierwsza, poniewaz jest mniejsza od 2. \n ";
      else
            cout << liczba <<" Nie jest liczba pierwsza, poniewaz dzieli sie przez " << wynik << ".\n";
    return 0;
}
