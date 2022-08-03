#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	int n;
	cin >> n;
	int i = 2;
	if (n == 1)
		return 0;
	while (i <= sqrt(n))
	{
		if (n % i == 0)
		{
			cout << i << "\n";
			n /= i;
			continue;
		}
		i++;

	}
	cout << n << "\n";
}