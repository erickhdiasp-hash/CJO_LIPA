// C02EX13.CPP

#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

int main(void)
{
  auto numero = 42;
  auto pi     =  3.1416;
  auto letra = 'a';
  auto texto = "sou uma frase";

  cout << "Numero: " << numero;
  cout << " - Tipo: " << typeid(numero).name() << endl;

  cout << "Pi: " << pi;
  cout << " - Tipo: " << typeid(pi).name() << endl;
  
  cout << "letra: " << letra;
  cout << " - Tipo: " << typeid(letra).name() << endl;
  
  cout << "texto: " << texto;
  cout << " - Tipo: " << typeid(texto).name() << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
