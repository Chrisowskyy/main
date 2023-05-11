#include <iostream> - sluzy do podpinania gotowych bibliotek

using namespace std;  //uzywanie przestrzeni nazw standardowych

int cukierki, uczniowie, x, y; //zmienne zarezerowane na konkretna nazwê

int main() //glowna funkcja w której znajduje sie glówny kod
{
      cout<<"Ile uczniow liczy twoja klasa: ";
      cin>>uczniowie;

      cout<<"Ile cukierkow kupiles:";
      cin>>cukierki;


      x = cukierki/(uczniowie-1);

      cout<<"Cukierkow dla kazdego ucznia bedzie: "<<x;

      y = cukierki-x*(uczniowie-1);
      cout<<endl<<"Dla ciebie zostanie cukierkow: "<<y;
      return 0;  //sygnal zakoñczenia programu
}
