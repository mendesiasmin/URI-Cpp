#include <iostream>

using namespace std;

double value(int amount, double price){
	return amount*price;
}

int main(){

	int code1, amount1, code2, amount2;
	double price1, price2;

	cin >> code1;
	cin >> amount1;
	cin >> price1;

	cin >> code2;
	cin >> amount2;
	cin >> price2;

	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(2);

	cout << "VALOR A PAGAR: R$ " << value(amount1, price1) + value(amount2, price2) << endl;

	return 0;
}
