#include <iostream>
#include <math.h>
using namespace std;

int main ()

{
	double dolar;
	double rs;
	

	cout << "Informe a quantidade de dolar: ";
	cin >> dolar;
	
	rs = ( dolar * 5.64 );
	
	cout  <<  " A quantidade em reais vai ser: "  << rs  <<  endl;
	
	return 0;
}