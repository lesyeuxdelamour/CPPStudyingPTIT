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
		int n, p;
		cin >> n >> p;
		if(n < p)
			cout << "0\n";
		else
		{
			ll cnt = 0, fac = 1;
			for(int i = p; i <= n; i += p)
			{
			    int fac = i;
				while(fac % p == 0)
				{
					fac /= p;
					cnt++;
				}
			} 
			cout << cnt << endl;
		}
	}
	return 0;
}