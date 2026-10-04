#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "Input three diffrent integars: ";
	cin >> a >> b >> c;
	int sum, product;
	float average;
	sum = a + b + c;
	cout << "sum is " << sum << endl;
	average = sum / 3.0;
	cout << "average is " << average << endl;
	product = a * b * c;
	cout << "product is " << product << endl;
	if (a < b) {
		if (a < c) {
			cout << "smallest is " << a << endl;
		}
	}
	else if(a>b) {
		if (b < c) {
			cout << "smallest is " << b << endl;
		 }
		else {
			cout << "smallest is " << c << endl;
		}
	}
	if (a > b) {
		if (a > c) {
			cout << "largest is " << a << endl;
		}
	}
	else if (b > a) {
		if (b > c) {
			cout << "largest is " << b << endl;
		}
		else {
			cout << "largest is " << c << endl;
		}
	}
}