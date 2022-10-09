// C++ Program to demonstrate function definition
#include <iostream>
using namespace std;

void fun(int x)
{
	// definition of
	// function
	x = 30;
}

int main()
{
	int x = 20;
	fun(x);
	cout << "x = " << x;
	return 0;
}
