#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool isLucky(int n)
{
	if(n < 10)
		return n == 9;
	int sumD = 0;
	while(n)
	{
		sumD += n % 10;
		n /= 10;
	}
	return isLucky(sumD);
}

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int n = 0;
		for(int i = 0; i < s.size(); ++i)
			n += s[i] - '0';
		cout << isLucky(n) << endl;
	}
	return 0;
}