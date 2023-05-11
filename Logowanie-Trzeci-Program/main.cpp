#include <iostream>

using namespace std;

string login, haslo;

int main()
{
      cout<<"Podaj login: ";
      cin>>login;
      cout<<"Podaj haslo: ";
      cin>>haslo;

      if((login=="admin") && (haslo=="password"))
      {
            cout<<"Poprawnie udalo sie zalogowac!";
      }
      else
      {
            cout<<"Niepoprawny login badz haslo!";
      }
      return 0;
}
