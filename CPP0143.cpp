#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

vector<ll> fibo(93);

void dpFibo()
{
	fibo[0] = 0;
	fibo[1] = fibo[2] = 1;
	for(int i = 3; i <= 92; ++i)
		fibo[i] = fibo[i - 1] + fibo[i - 2];
}

int main()
{
	faster();
	dpFibo();
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << fibo[n] << endl;
	}
	return 0;
}