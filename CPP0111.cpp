#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool check(ll n)
{
	int tmp = n % 10;
	n /= 10;
	while(n)
	{
		if(abs(tmp - n % 10) != 1)
			return 0;
		tmp = n % 10;
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
		ll n;
		cin >> n;
		cout << (check(n) ? "YES\n" : "NO\n"); 
	}
	return 0;
}