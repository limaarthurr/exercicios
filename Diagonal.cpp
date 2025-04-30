#include <iostream>
#include <math.h>
using namespace std;

int main()

{
	int area;
	int diagonal;
	
	cout << "Informe a medida da diagonal ";
	cin >> diagonal;
	
	area = (diagonal * diagonal) / 2;
	
	cout << "a area do quadrado pela diagonal é: " << area << endl;
	
	
	return 0;
}