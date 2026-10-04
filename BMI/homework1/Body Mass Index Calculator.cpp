#include <iostream>
#include<cmath>
using namespace std;
int main() {
	double a, b, c;
	std::cout << "Your weight is (kg)";
	std::cin >> a;
	std::cout << "Your height is (m)";
	std::cin >> b;
	double d = pow(b, 2);
	c = a / d;
	std::cout << "Your BMI is " << c<<endl;
	if (c < 18.5) {
		std::cout << "Underweight" << endl;
	}
	else if (c <=24.9) {
		std::cout << "Normal weight" << endl;

	}
	else if (c < 29.9) {
		std::cout << "Overweight" << endl;
	}
	else if (c >= 30) {
		std::cout << "Obese" << endl;
	}
	return 0;
}
