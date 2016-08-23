#include <iostream>
#include <string>

using namespace std;

double salary(double fixed, double sales){
	double salary;
	salary = fixed + (sales*0.15);
	return salary;
}

int main(){

	string name;
	double fixed, sales;

	cin >> name;
	cin >> fixed;
	cin >> sales;

	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(2);

	cout << "TOTAL = R$ " << salary(fixed, sales) << endl;

	return 0;

}
