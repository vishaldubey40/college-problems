#include <stdio.h>

int gcd(int p, int q)
{
	// Everything divides 0
	if (p == 0)
	return q;
	if (q == 0)
	return p;

	if (p == q)
		return p;
	if (p > q)
		return gcd(p-q, q);
	return gcd(p, q-p);
}

// Driver program to test above function
int main()
{
	int a = 48, b = 66;
	printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
	return 0;
}
