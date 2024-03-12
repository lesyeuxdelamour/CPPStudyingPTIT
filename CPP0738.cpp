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
		int n;
		cin >> n;
		int a[n];
		ll cnt = 0, ini = 1;
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		int flag = 1;
		while(flag)
		{
			for(int i = 0; i < n; ++i)
				if(a[i] & 1)
				{
					a[i]--;
					cnt++;
				}
			int tmp = 0;
			for(int i = 0; i < n; ++i)
			{
				a[i] /= 2;
				if(a[i])
					tmp++;
			}
			if(!tmp)
				flag = 0;
			cnt++;
		}
		cout << cnt - 1<< endl;
	}
	return 0;
}