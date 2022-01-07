#include <iostream>
#include <math.h>
using namespace std;

int main (){

    int t;
	cin >> t;
	for (int tt = 0; tt < t; tt++)
	{
		int n;
		long double k;
		cin >> n >> k;
		long double a[n];
		int flag = 0;
		for (int i = 0; i < n; i++)
			cin >> a[i];
		long double s1 = 0.0;
		long double s2 = 0.0;
		for (int i = 1; i < n; i++)
		{
			s2 = s2 + a[i - 1];
			s1 = s1 + a[i - 1];
			if (a[i] / s1 * ((1.0 * 100)) > k)
			{
				long double s = ((a[i] * (1.0 * 100)) / k) - s1;
				s = ceil(s);
				s1 = s1 + s;
			}
		}
		cout << (long long int)(s1 - s2) << "\n";
	}

    return 0;
}