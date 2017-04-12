#include <iostream>
#include <stdlib.h>
using namespace std;

int main () {
	cout << "Enter size of array: " << endl;
	int size;
	cin >> size;
	
	int* numArray = new int[size];
	srand(56);
	for (int i=0;i<size;i++) {
		numArray[i] = rand();
	}
	
	cout << "Generated array: " << endl;
	for (int i=0;i<size;i++) {
		cout << "i=" << i << ": " << numArray[i] << ", " << *(numArray+i) << ", " << numArray << ", " << (numArray+i) << endl;
	}
}