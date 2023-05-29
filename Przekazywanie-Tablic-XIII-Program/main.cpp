#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


const short N = 6;

void wypelnij_tablice(short* tab)
{
      for(short i = 0; i < N; i++)
      tab[i] = 1 + rand() % 49;
}

void wypisz_tablice(short* tab)
{
      for (short i = 0; i <N; i++)
             cout << tab[i] << '\t';
             cout << endl;
}
int main()
{
      srand(time(nullptr));
      short tablica[N];
      wypelnij_tablice(tablica);
      wypisz_tablice(tablica);

    return 0;
}
