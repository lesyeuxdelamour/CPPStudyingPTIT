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
		string s1, s2;
		cin >> s1 >> s2;
		int n1 = s1.size(), n2 = s2.size(), n = 1e3, l, r;
		int dd[256] = {};
		for(int i = 0; i < s2.size(); ++i)
			dd[s2[i]]++;
		for(int i = 0; i < n1; ++i)
		{
			int d[256] = {};
			for(int j = i; j < n1; ++j)
			{
				d[s1[j]]++;
				int flag = 1;
				for(int k = 97; k < 123; ++k)
					if(d[k] < dd[k])
					{
						flag = 0;
						break;
					}
				if(flag && n > j - i + 1)
				{
					n = j - i + 1;
					l = i;
					r = j;
				}
			}
		}
		if(n == 1e3)
			cout << -1;
		else
			for(int i = l; i <= r; ++i)
				cout << s1[i];
		cout << endl;
	}
	return 0;
}