#include <iostream>
using namespace std;

class CRectangle
{
	private:
		int width, height;
	public:
		void set_values (int, int);
		int area () {return (width * height);}
};

void CRectangle::set_values (int a, int b) {
	width = a;
	height = b;
}

int main () {
	CRectangle* pRect = new CRectangle;
	(*pRect).set_values(10, 20);
	cout << "Area: " << pRect->area() << endl;
}