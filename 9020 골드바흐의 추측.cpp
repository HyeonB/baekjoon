#include <iostream>
#include <math.h>
using namespace std;
bool pri(int n)
{
	if (n == 2)
		return true;
	if (n % 2 == 0 || n == 1)
		return false;
	for (int i = 3; i <= sqrt(n); i+=2)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int m;
	cin >> m;
	int n;
	for (int i = 0; i < m; i++)
	{
		cin >> n;
		int a, b;
		if (n == 4)
		{
			a = 2, b = 2;
			cout << a << " " << b << "\n";
			continue;
		}
		if (n % 4 == 0)
		{
			a = n / 2 - 1;
			b = n / 2 + 1;
		}
		else
		{
			a = n / 2;
			b = n / 2;
		}
		for (; a > 1; a -= 2)
		{
			b = n - a;
			if (pri(a) && pri(b))
				break;
		}
		cout << a << " " << b << "\n";
	}
}