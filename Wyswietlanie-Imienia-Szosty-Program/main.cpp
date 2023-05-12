#include <iostream>
#include <windows.h>

using namespace std;

int liczba;
string imie;

int main()
{
      cout<<"Podaj twoje imie: ";
      cin>>imie;
      cout<<"Podaj liczbe calkokwita: ";
      cin>>liczba;
      for(int i=1; i<=liczba; i++)
      {
            cout<<i<<". "<<imie<<endl;
      }
      return 0;
}
