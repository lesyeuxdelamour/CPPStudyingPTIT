#include <bits/stdc++.h>
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int divisors(int n)
{
	int cnt = 0;
	for(int i = 1; i * i <= n; ++i)
		if(n % i == 0)
		{
			cnt += 2;
		    if(i == n / i)
		    	cnt -= 1;
		}
	return cnt;
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
		if(n & 1)
			cout << 0 << endl;
		else
			cout << divisors(n / 2) << endl;
	}
	return 0;
}