#include <iostream>
using std::cout;
using std::cin;

// 12
// int x; <<-- variable value
// &x; <<-- pointer to the variable
// int* p = &x; <<-- pointer to the variable
// *p; <<-- variable value
// once pointers are assigned a different value/location, the variable being reference chages
// int* p = &x; p = &y; <<-- p now references the location of y as opposed to x

int main(void)
{
	int x = 23;
	int y = 99;
	int* p = &x;
	int* q = &y;
	int a [] = {1,2,3,4,5};
	int* point = a;
	cout << "p == " << p << "\n&x == " << &x << "\n";
	cout << "q == " << q << "\n&y == " << &y << "\n";
	cout << "x == " << x << "\n*p == " << *p << "\n";
	cout << "y == " << y << "\n*q == " << *q << "\n";
	p = q;
	/* TODO: think carefully and predict the output of the following: */
	cout << "p == " << p << "\n&x == " << &x << "\n";
	cout << "q == " << q << "\n&y == " << &y << "\n";
	cout << "x == " << x << "\n*p == " << *p << "\n";
	cout << "y == " << y << "\n*q == " << *q << "\n";
	return 0;
}
