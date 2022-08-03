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
	int n;
	while (1)
	{
		cin >> n;
		if (n == 0)
			return 0;
		int ans = 0;
		for (int i = n + 1; i <= 2 * n; i++)
		{
			if (pri(i))
				ans++;
		}
		cout << ans << "\n";
	}
}
