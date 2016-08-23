#include <iostream>
#include <math.h>

using namespace std;

double volume(int radius){
	double pi = 3.14159;
	double result;
	result = (4.0/3)*pi*pow(radius, 3);
	return result;
}

int main(){
	double radius;

	cin >> radius;

	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(3);

	cout << "VOLUME = " << volume(radius) << endl;

	return 0;
}
