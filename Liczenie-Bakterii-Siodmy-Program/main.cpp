#include <iostream>
#include <windows.h>

using namespace std;

int bakteria=1; int godziny=0;

int main()
{
      while(bakteria <= 1000000000)
      {
            godziny++;
            bakteria = bakteria*2;
            cout<<"minelo godzin: "<<godziny<<endl;
            cout<<"liczba bakterii: "<<bakteria<<endl;
      }
      return 0;
}
