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
		int n, k;
		cin >> n >> k;
		vector<int> v;
		for(int i = 2; i <= sqrt(n); ++i)
			while(n % i == 0)
			{
				v.push_back(i);
				n /= i;
			}
		if(n > 1)
			v.push_back(n);
		if(v.size() < k)
			cout << "-1\n";
		else
			cout << v[k - 1] << endl;
	}
	return 0;
}