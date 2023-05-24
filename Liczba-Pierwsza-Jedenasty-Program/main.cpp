#include <iostream>

using namespace std;

bool czy_pierwsza(unsigned long long liczba)
{
      if(liczba < 2)
            return false;
      else
            for(unsigned dzielnik = 2; dzielnik * dzielnik <= liczba; dzielnik++)
                  if(liczba % dzielnik == 0)
                        return false;
                  return true;
}

int main()
{
      cout << "Podaj liczbe naturalna: ";
      unsigned long long liczba;
      cin >> liczba;
      if(czy_pierwsza(liczba))
             cout << liczba << " Jest liczba pierwsza.\n";
      else
            cout << liczba << " Nie jest liczba pierwsza \n ";
    return 0;
}
