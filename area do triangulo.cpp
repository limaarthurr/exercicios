#include <iostream>
using namespace std;

int main ()

{
	int area;
	int base; 
	int altura;
		
	cout << "Informe a base do triangulo";
	cin >> base;
	cout << "Informe a altura do triangulo";
	cin >> altura;
	
	area = base * altura / 2;
	
	cout << " a area do triangulo e " << area << endl;
	
	return 0;

}