#include <iostream>
using namespace std;
int main()
{
	long long x, y, xy, k, n;
	ios::sync_with_stdio(false);
	cin >> y >> k >> n;
	long long max = n - n%k;
	if (max <= y)
		cout << -1 << endl;
	else
	{
		long long min = y - y %k + k;
		for (xy = min; xy <= max; xy += k)
		{
			if (xy - min)
				cout << " ";
			cout << xy - y;
		}
		cout << endl;
	}
}