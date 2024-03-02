#include <bits/stdc++.h>
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int sumDigit(int n)
{
	int sum = 0;
	while(n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

bool isSmith(int n)
{
	int sum = 0, sumD = sumDigit(n);
	for(int i = 2; i <= sqrt(n); ++i)
	{
		if(n % i == 0)
		{
			int tmp = sumDigit(i);
			while(n % i == 0)
			{
				sum += tmp;
				n /= i;
			}
		}
	}
	if(sum == 0)
		return 0;
	if(n > 1)
		sum += sumDigit(n);
	return sum == sumD;
}

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << (isSmith(n) ? "YES\n" : "NO\n");
	}
	return 0;
}