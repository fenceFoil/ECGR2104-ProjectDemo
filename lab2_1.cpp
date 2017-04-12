#include <iostream>
using namespace std;

int main () {
	int* pX = new int;
	*pX = 9;
	cout << *pX << " addr " << pX << endl;
	
	delete pX;
	cout << *pX << " addr " << pX << endl;
	
	pX = NULL;
	cout << "addr " << pX << endl;
	cout << *pX << endl;

	return 0;
}