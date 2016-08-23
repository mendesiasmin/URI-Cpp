#include <iostream>

using namespace std;

double salary(int hours, double valueTime){
	return hours*valueTime;
}

int main(){
	int number, hours;
	double valueTime;

	cin >> number;
	cin >> hours;
	cin >> valueTime;

	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(2);

	cout << "NUMBER = " << number << endl;
	cout << "SALARY = U$ " << salary(hours, valueTime) << endl;

	return 0;

}
