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
		map<int, int> mp;
		for(int i = 2; i <= sqrt(n); ++i)
			while(n % i == 0)
			{
				mp[i]++;
				n /= i;
			}
		if(n > 1)
			mp[n]++;
		for(auto x : mp)
			cout << x.first << " " << x.second << " ";
		cout << endl;
	}
	return 0;
}