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
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin, s);
		stringstream ss(s);
		int n, cnt = 0, odd = 0, even = 0;
		while(ss >> n)
		{
			cnt++;
			if(n & 1)
				odd++;
			else
				even++;
		}
		if((cnt & 1 && odd > even) || (!(cnt & 1) && odd < even))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}