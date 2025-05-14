#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   double milha;
   double quilometro;
   
   cout << "Informe o numero de milhas:";
   cin >> milha;
   
   quilometro = milha*1.852 ;
   
   cout << "Milhas para quilometros e " << quilometro << endl;
   
   
	return 0;
}