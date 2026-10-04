#include <iostream>
using namespace std;
int main() {
	int a;
	cout << "Plese input a five-digit integar: ";
	cin >> a;
	int b, c, d, e, f;
	b = a / 10000;
	c = (a % 10000) / 1000;
	d = (a % 1000) / 100;
	e = (a % 100) / 10;
	f = a % 10;
	cout << b << "   " << c << "   " << d << "   " << e << "   " << f;
}