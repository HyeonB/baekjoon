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
	int m, n;
	cin >> m >> n;
	for (int i = m; i <= n; i++)
	{
		if (pri(i))
		{
			cout << i << "\n";
		}
	}

}