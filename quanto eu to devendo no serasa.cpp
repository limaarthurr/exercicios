#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	double a;
	double b;
	double c;
	double d;
	double e;
	double pagamento;
	double troco;
	
	
	cout << "Informe o valor do primeiro produto: ";
	cin >> a;
	cout << "Informe o valor do segundo produto: ";
	cin >> b ;
    cout << "Informe o valor do terceiro produto: ";
	cin >> c;
    cout << "Informe o valor do quarto produto: ";
	cin >> d;
    cout << "Informe o valor do quinto produto: ";
	cin >> e; 	

	cout << "Informe o valor do pagamento: ";
	cin >> pagamento;
	
	troco = pagamento - (a + b + c+ d + e);
	
	cout << "Seu troco sera: " << troco << endl;
	
	return 0;
}