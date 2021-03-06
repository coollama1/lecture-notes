#include<iostream>
using std::cin;
using std::cout;
using std::endl;

//20

/* TODO: review that "print vertically" function.  Make sure you can write
 * it on your own and that you understand why it works (you can trace the
 * sequence of calls) */

/* TODO: write code to compute the greatest common divisor of two integers
 * Do this with recursion -- no loops!
 * NOTE: make sure you understand how the size of the input is defined, and
 * where that factors into your reasoning when writing the function. */
int gcd(int a, int b)
{
	if(a % b == 0)
	{
		return b;
	}
	return gcd(b, a % b);
}

/* TODO: write the *extended* GCD algorithm, which returns gcd(a,b), but
 * also sets u and v such that ua + vb = gcd(a,b) Warning: this might take a
 * little bit of thinking (if you don't just look up the answer online).  Save
 * it for last. */
int xgcd(int a, int b, int& u, int& v)
{
	return 0;
}

void gcdTest()
{
	// TODO: modify this to test your *extended* gcd algorithm,
	// once you've written it, that is.
	int a,b,d;
	cout << "Enter pairs of integers a,b for gcd test: ";
	while(cin >> a >> b) {
		d = gcd(a,b);
		cout << "The gcd is: " << d << endl;
	}
}

int main(int argc, char** argv)
{
	gcdTest();
	return 0;
}
