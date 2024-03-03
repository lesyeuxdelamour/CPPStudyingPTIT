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
		string s;
		cin >> s;
		int n = s.size(), cnt = 1;
		for(int i = 1; i < n; ++i)
		{
			if(s[i] != s[i - 1])
			{
				cout << s[i - 1] << cnt;
				cnt = 1;
			}
			else
				cnt++;
		}
		cout << s[n - 1] << cnt << endl;
	}
	return 0;
}