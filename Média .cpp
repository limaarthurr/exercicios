#include <iostream>
using namespace std;

int main()
{
	double media;
	double valor1;
	double valor2;
	double valor3;
	double valor4;
	
	cout << "Informe o primeiro valor: ";
	cin >> valor1;
	cout << "Informe o segundo valor: ";
	cin >> valor2;
	cout << "Informe o terceiro valor: ";
	cin >> valor3;
	cout << "Informe o quarto valor: ";
	cin >> valor4;
	
	media = (valor1 + valor2 + valor3 + valor4) / 4;
	
	cout << "A media e : " << media << endl;
	
	return 0;
}
