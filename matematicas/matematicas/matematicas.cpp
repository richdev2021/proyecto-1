#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int main()
{
	float a, b, c, d, e, r;
	cout << "di el primer numero de la operacion" << endl;
	cin >> a;
	system("color f5");
	cout << "di el segundo numero de la operacion" << endl;
	cin >> b;
	system("color a4");
	c = a * b;
	cout << c << endl;
	d = a / b;
	cout << d << endl;

	e = pow(d, b);
	cout << e << endl;

	r = c / e;
	cout << r << endl;
	if (r > 10) {
		cout << "true"<<endl;
		
	}
	else {
		cout << "false" << endl;
	}
	system("color 90");
	return 0;
}
