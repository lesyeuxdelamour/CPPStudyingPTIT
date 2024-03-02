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
		ll n;
		cin >> n;
		ll tmp = 1;
		for(int i = 2; i <= sqrt(n); ++i)
			if(n % i == 0)
			{
				tmp = n;
				while(n % i == 0)
					n /= i;
			}
		if(n > tmp)
			tmp = n;
		cout << tmp << endl;
	}
	return 0;
}