#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool isPrime(int n)
{
	if(n < 2)
		return 0;
	if(n == 2 || n == 3)
		return 1;
	if(n % 2 == 0 || n % 3 == 0)
		return 0;
	for(int i = 5; i * i <= n; i += 2)
		if(n % i == 0 || n % (i + 2) == 0)
			return 0;
	return 1;
}

bool isStraight(int n)
{
	int tmp1 = n % 10;
	n /= 10;
	int tmp2 = n % 10;
	n /= 10;
	if(tmp1 == tmp2)
		return 0;
	if(tmp1 > tmp2)
		while(n)
		{
			if(n % 10 >= tmp2)
				return 0;
			tmp2 = n % 10;
			n /= 10;
		}
	else
		while(n)
		{
			if(n % 10 <= tmp2)
				return 0;
			tmp2 = n % 10;
			n /= 10;
		}
	return 1;
}

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		int n, cnt = 0;
		cin >> n;
		int l = pow(10, n - 1);
		int r = pow(10, n) - 1;
		for(int i = l; i <= r; ++i)
			if(isStraight(i) && isPrime(i))
				cnt++;
		cout << cnt << endl;
	}
	return 0;
}
