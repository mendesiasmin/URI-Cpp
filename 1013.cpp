#include <iostream>
#include <cstdlib>
#include <cmath>

int largerAB(int a, int b){
	return (a + b + abs(a-b))/2;
}

using namespace std;

int main(){
	int larger;
	int a, b, c;

	cin >> a >> b >> c;

	larger = largerAB(a, b);
	larger = largerAB(larger, c);

	cout << larger << " eh o maior" << endl;

	return 0;
}


