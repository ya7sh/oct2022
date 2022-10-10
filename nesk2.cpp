#include <bits/stdc++.h>
using namespace std;

class gfg {
public:
	int getSum(int n)
	{
		int sum;

		for (sum = 0; n > 0; sum += n % 10, n /= 10)
			;

		return sum;
	}
};

int main()
{
	gfg g;
	int n = 687;

	// Function call
	cout << g.getSum(n);
	return 0;
}
