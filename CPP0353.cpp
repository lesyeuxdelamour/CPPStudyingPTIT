#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool isPalindromic(int n[], string s)
{
	int l = 0, r = s.size() - 1;
	while(l < r)
	{
		if(n[l] != n[r])
			return 0;
		l++;
		r--;
	}
	return 1;
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
		int n[s.size()];
		for(int i = 0; i < s.size(); ++i)
		{
			char c = tolower(s[i]);
			if(c >= 'a' && c <= 'c')
				n[i] = 2;
			if(c >= 'd' && c <= 'f')
				n[i] = 3;
			if(c >= 'g' && c <= 'i')
				n[i] = 4;
			if(c >= 'j' && c <= 'l')
				n[i] = 5;
			if(c >= 'm' && c <= 'o')
				n[i] = 6;
			if(c >= 'p' && c <= 's')
				n[i] = 7;
			if(c >= 't' && c <= 'v')
				n[i] = 8;
			if(c >= 'w' && c <= 'z')
				n[i] = 9;
		}
		cout << (isPalindromic(n, s) ? "YES\n" : "NO\n");
	}
	return 0;
}