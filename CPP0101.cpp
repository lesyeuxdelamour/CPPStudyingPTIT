#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		ll sum = n * (n + 1) / 2;
		cout << sum << endl;
	}
	return 0; 
}