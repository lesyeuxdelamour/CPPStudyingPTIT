#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool isPalindromic(string s)
{
	int l = 0, r = s.size() - 1;
	while(l < r)
	{
		if(s[l] != s[r])
			return 0;
		l++;
		r--;
	}
	return 1;
}

bool isPretty(string s)
{
	for(auto x : s)
		if((x - '0') & 1)
			return 0;
	return isPalindromic(s);
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
		cout << (isPretty(s) ? "YES\n" : "NO\n");
	}
	return 0;
}