// C02EX14.CPP

#include <iostream>

using namespace std;

int main(void)
{
  int16_t x, y;

  x = 10; y = ++x;
  cout << "\nX = " << x << " | Y = " << y << endl; // soma mais 1 em "x" e depois joga em "y"

  x = 10; y = x++; // joga valor de "x" em "y" e depois soma mais 1 em "x"
  cout << "\nX = " << x << " | Y = " << y << endl;

  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
  return 0;
}
