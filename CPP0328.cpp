#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int Do(string s, int k)
{
	int cnt = 0, n = s.size();
	for(int i = 0; i < n; ++i)
	{
		int tmp = 0;
		for(int j = i; j < n; ++j)
		{
			tmp = (tmp * 10 + s[j] - '0') % k;
			if(tmp == 0)
				cnt++;
		}
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
		string s;
		cin >> s;
		cout << Do(s, 8) - Do(s, 24) << endl;
	}
	return 0;
}