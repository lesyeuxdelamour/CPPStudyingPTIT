#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool isLucky(int n)
{
	while(n)
	{
		int tmp = n % 10;
		if(tmp != 6 && tmp != 8 && tmp != 0)
			return 0;
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
		int n;
		cin >> n;
		cout << (isLucky(n) ? "YES\n" : "NO\n");
	}
	return 0;
}