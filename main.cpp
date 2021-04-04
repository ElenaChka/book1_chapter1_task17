// Программа, в которой создается массив и заполняется степенями двойки 2^0, 2^1, 2^2 и т.д.
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
  int RazmerMassiva ;
cout << " Vvedite colichestvo chisel: " ;
cin >> RazmerMassiva;
int Sashylechka [RazmerMassiva];
for ( int n = 0; n <= RazmerMassiva - 1; n ++)
    {
    Sashylechka [n] = pow (2,n);
    cout << Sashylechka [n] << endl;
    }
}
