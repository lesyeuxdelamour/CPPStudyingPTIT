#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool check(int n)
{
	int odd = 0, even = 0;
	while(n)
	{
		int tmp = n % 10;
		if(tmp & 1)
			odd++;
		else
			even++;
		n /= 10;
	}
	return odd == even;
}

int main()
{
	faster();
	int n;
	cin >> n;
	int l = pow(10, n - 1);
	int r = pow(10, n) - 1;
	int cnt = 0;
	for(int i = l; i <= r; ++i)
	{
		if(check(i))
		{
			cout << i << " ";
			cnt++;
		}
		if(cnt && cnt % 10 == 0)
		{
			cout << endl;
			cnt = 0;
		}
	}
	return 0;
}