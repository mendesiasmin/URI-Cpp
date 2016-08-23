#include <iostream>

using namespace std;

double mean(double a, double b){
	double mean;
	mean = ((3.5 * a) + (7.5 * b)) / 11;
	return mean;
}

int main(){

	double a, b;

	cin >> a;
	cin >> b;

	cout.setf (ios::fixed, ios::floatfield);
	cout.precision(5);
	cout << "MEDIA = " << mean(a,b) << endl;

	return 0;

}
