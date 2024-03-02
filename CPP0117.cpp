#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int compact(int n)
{
	if(n < 10)
		return n;
	int sumD = 0;
	while(n)
	{
		sumD += n % 10;
		n /= 10;
	}
	return compact(sumD);
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
		cout << compact(n) << endl;
	}
	return 0;
}