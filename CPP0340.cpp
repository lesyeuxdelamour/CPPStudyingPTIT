#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		int m, n;
		string s;
		cin >> m >> n >> s;
		int len = s.size();
		ll dp[len][n] = {}; // dp[i][j] = số xâu con bắt đầu từ vị trí 0 và kết thúc tại vị trí <= i chia n dư j
		dp[0][(s[0] - '0') % n] = 1;
		for(int i = 1; i < len; ++i)
		{   
			dp[i][(s[i] - '0') % n]++;
			for(int j = 0; j < n; ++j)
			{
				dp[i][j] += dp[i - 1][j];
				dp[i][(j * 10 + (s[i] - '0')) % n] += dp[i - 1][j];
			}
		}
		cout << dp[len - 1][0] << endl;
	}
	return 0;
}