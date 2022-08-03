#include <iostream>
#include <math.h>
using namespace std;
bool pri(int a)
{
	if (a == 2)
		return true;
	if (a % 2 == 0 || a == 1)
		return false;

	for (int i = 3; i <= sqrt(a); i += 2)
	{
		if (a % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int n, a;
	int an = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (pri(a))
		{
			an++;
		}
	}

	cout << an << endl;
}
