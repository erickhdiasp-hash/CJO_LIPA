// C04EX03.CPP

#include <iostream>

using namespace std;

int main(void)
{
  uint16_t n, i = 1;
  uint16_t fat {1};

  cout << "Programa Fatorial" << endl << endl;
  cout << "Fatorial de que valor: "; cin >> n;
  cin.ignore(80, '\n');

  do
    {
       fat *= i;
       ++i;
    }
  //* Simular um execute/enquanto for(dapra trocar o fluxo para negativos usando o not no while)
  while (not (i > n));

  cout << endl;
  cout << "Fatorial de " << n << " = "<< fat << endl;
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
