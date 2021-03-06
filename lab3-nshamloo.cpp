// Lab3.cpp : Defines the entry point for the console application.
// Niloufar Shamloo

#include "stdafx.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	// Problem 1 & 2:
	short n,
		val = 0;
	cin >> n;
	for (short i = 1; i <=n; i++)
	{
		val += i; //256 makes short overflow
	}
	cout << "The sum from 1 to n " << n << " is: " << val << endl;

	// Problem 3:
	long m,
		valu = 0;
	cin >> m;
	for (long i = 1; i <= m; i++)
	{
		valu += i; //2147483647 makes long overflow
	}
	cout << "The sum from 1 to n " << m << " is: " << valu << endl;

	// Problem 4:
	long f;
	float val3 = 1;
	cin >> f;
	for (long k = 1; k <= f; k++)
	{
		val3 *= k;
	}
	cout << "The n! factorial of n : " << f << " is " << val3 << endl;
	//By testing different values we can see that 35 is the number to cause an overflow, because the product reported at that time is infinity.

	// Problem 5:
	long p;
	double val4 = 1;
	cin >> p;
	for (long t = 1; t <= p; t++)
	{
		val4 *= t;
	}
	cout << "The n! factorial of n : " << p << " is " << val4 << endl;
	//By testing different values we can see that 171 is the number to cause an overflow, because the product reported at that time is infinity.

	// Problem 6a:
	float o,
		valux = 0.0;
	cin >> o;
	for (float i = 0; i < o; i++)
	{
		valux += (1.0/o); //
	}
	valux -= 1.0; 
	cout << "The sum of ratios from 1 to n : " << o << " is " << valux << endl;

	// Problem 6b:
	double q,
		valuy = 0.0;
	cin >> q;
	for (double i = 0; i < q; i++)
	{
		valuy += (1.0 / q); //
	}
	valuy -= 1.0;
	cout << "The sum of ratios from 1 to n : " << q << " is " << valuy << endl;

	// Problem 7:
	for (float i = 3.4; i < 4.4; i += 0.2) 
	{ 
		cout << "i = " << i << endl; //This does not work when the for loop is using a floating point. When we change this to double it works by omitting 4.4 from the list. 
	}

	// Problem 8:
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		cout << "i = " << i << endl; //This does not work when the for loop is using a floating point. When we change this to double it works by omitting 4.4 from the list. 
	}
}

