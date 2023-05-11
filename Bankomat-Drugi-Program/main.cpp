#include <iostream>

using namespace std;

string PIN;

int main()
{
      cout<<"Podaj PIN: ";
      cin>>PIN;
      if(PIN=="0001")
      {
            cout<<"Poprawny PIN! Teraz mozesz wyplacic pieniadze";
      }
      else
      {
            cout<<"Niepoprawny PIN!";
      }
return 0;
}
