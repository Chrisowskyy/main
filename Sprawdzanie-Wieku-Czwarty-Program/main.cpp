#include <iostream>

using namespace std;

int wiek;

int main()
{
      cout<<"Podaj swoj wiek: ";
      cin>>wiek;
      if((wiek>=18) && (wiek<35))
      {
            cout<<"Jestes pelnoletni ale nie mozesz kandydowac na prezydenta!";
      }
      else if(wiek>=35)
      {
            cout<<"Jestes pelnoletni i mozesz  kandydowac na prezydenta!";
      }
      else
      {
            cout<<"Nie jestes pelnoletni i nie mozesz kandydowac na prezydenta!";
      }
      return 0;
}
