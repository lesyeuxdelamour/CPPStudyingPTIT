#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int len, s[20005], ans[20005];

void edit(int x, int delta)
{
	for(int i = 2; i <= sqrt(x); ++i)
		while(x % i == 0)
		{
			s[i] += delta;
			x /= i;
		}
	if(x != 1)
		s[x] += delta;
}

void mul(int x)
{
	len += 5;
	for(int i = 0; i < len; ++i)
		ans[i] *= x;
	for(int i = 0; i < len; ++i)
	{
		ans[i + 1] += ans[i] / 10;
		ans[i] %= 10;
	}
	while(len > 0 && ans[len - 1] == 0)
		len--;
}

void Catalan(int n)
{
	for(int i = n + 1; i <= 2 * n; ++i)
		edit(i, 1);
	for(int i = 1; i <= n + 1; ++i)
		edit(i, -1);
	ans[0] = len = 1;
	for(int i = 1; i < 20005; ++i)
		while(s[i]--)
			mul(i);
	for(int i = len - 1; i >= 0; --i)
		cout << ans[i];
}

int main()
{
	faster();
	int n;
	cin >> n;
	n++;
	for(int i = n + 1; i <= 2 * n; ++i)
		edit(i, 1);
	for(int i = 1; i <= n + 1; ++i)
		edit(i, -1);
	ans[0] = len = 1;
	for(int i = 1; i < 20005; ++i)
		while(s[i]--)
			mul(i);
	for(int i = len - 1; i >= 0; --i)
		cout << ans[i];
	return 0;
}