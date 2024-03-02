#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool isSphenic(int n)
{
	if(n < 30)
		return 0;
	int cnt = 0;
	for(int i = 2; i * i <= n; ++i)
	{
		if(n % i == 0)
		{
			n /= i;
			cnt++;
		}
		if(n % i == 0)
			return 0;
	}
	return cnt + (n != 1) == 3;
}


int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << isSphenic(n) << endl;
	}
	return 0;
}