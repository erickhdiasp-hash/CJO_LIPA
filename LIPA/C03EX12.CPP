// C03EX12.CPP

#include <iostream>
#include <compare>

using namespace std;

int main(void)
{
//** variavel de uma biblioteca que é strong_ordering,
//* por isso usa-se auto para variaveis que estao na biblioteca,
//* diferente dos nativos do c++.
//* as {} tem por função utilizar o = quando usa-se auto a inicializaçãoẽ obrigatoria. 	
  int32_t num1, num2;
  auto resultado {strong_ordering::equal};

  cout << "Informe primeiro numero ..: ";
  cin >> num1;
  cin.ignore(80, '\n');

  cout << "Informe segundo numero ...: ";
  cin >> num2;
  cin.ignore(80, '\n');

//**Space ship relacional, da biblioteca <compare>
//* precisa de chave e std
  resultado = num1 <=> num2;

  if (resultado < 0)
    cout << num1 << " menor que " << num2 << endl;
  else if (resultado == 0)
    cout << num1 << " igual a " << num2 << endl;
  else
    cout << num1 << " maior que " << num2 << endl;
  cout << endl;

  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
