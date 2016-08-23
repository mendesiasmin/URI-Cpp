#include <iostream>

using namespace std;

int difference(int a, int b, int c, int d){
	int result;
	result = (a*b - c*d);
	return result;
}

int main(){

	int a, b, c, d;

	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;

	cout << "DIFERENCA = " << difference(a,b,c,d) << endl;

	return 0;
}
