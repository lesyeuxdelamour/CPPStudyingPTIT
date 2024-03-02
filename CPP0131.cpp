#include <bits/stdc++.h>
#define endl "\n"
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int check(int n)
{
	if(n % 2 == 0)
		return 2;
	for(int i = 3; i <= sqrt(n); ++i)
		if(n % i == 0)
			return i;
	return n;
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
		for(int i = 1; i <= n; ++i)
			cout << check(i) << " ";
		cout << endl;
	}
	return 0;
}