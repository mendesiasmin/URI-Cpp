#include <iostream>

using namespace std;

double areaTriangle(double base, double height){
	return base*height/2;
}

double areaCircle(double radius){
	double pi = 3.14159;
	return pi*radius*radius;
}

double areaTrapeze(double largerBase, double smallerBase, double height){
	return (largerBase + smallerBase) * height / 2;
}

double areaRectangle(double base, double height){
	return base * height;
}

int main(){
	double a, b, c;
	
	cin >> a >> b >> c;

	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(3);
	cout << "TRIANGULO: " << areaTriangle(a, c) << endl;
	cout << "CIRCULO: " << areaCircle(c) << endl;
	cout << "TRAPEZIO: " << areaTrapeze(a, b, c) << endl;
	cout << "QUADRADO: " << areaRectangle(b, b) << endl;
	cout << "RETANGULO: " << areaRectangle(a, b) << endl;

	return 0;
}
	
