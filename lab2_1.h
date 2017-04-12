#include <iostream>

int main () {
	int x = 5;
	int *pX = &x;
	cout << x << endl;
	cout << pX << endl;
	cout << *pX << endl;
	cout << &x << endl;

	return 0;
}