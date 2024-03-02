#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool isPalindrome(string n)
{
	int l = 0, r = n.size() - 1;
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
		string n;
		cin >> n;
		cout << (isPalindrome(n) ? "YES\n" : "NO\n") << endl;
	}
	return 0;
}