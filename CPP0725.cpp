#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll dp[1001][1001];

void sieve()
{
	dp[1][0] = dp[1][1] = 1;
	for(int i = 2; i <= 1000; ++i)
		for(int j = 0; j <= i; ++j)
			if(j == 0 || j == i)
				dp[i][j] = 1;
			else
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % MOD; // công thức Pascal
}

int main()
{
	faster();
	sieve();
	int t;
	cin >> t;
	while(t--)
	{
		int n, r;
		cin >> n >> r;
		cout << dp[n][r] << endl;
	}
	return 0;
}