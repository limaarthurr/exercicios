#include <iostream>
#include <math.h>
using namespace std;

int main()

{
	double x;
	double y;
	double media;
	
	cout << "Informe o x: ";
	cin >> x;
	cout << "Informe o y: ";
	cin >> y;
	
	media = sqrt(x * y );
	
	cout << "A media geometrica: " << media << endl;
	
	
	
	
	return 0;
}