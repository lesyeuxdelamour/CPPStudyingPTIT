#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

struct cmp
{ 
	bool operator()(const string& a, const string& b)
	{ 
		if(a.size() == b.size())
			return a > b; 
		return a.size() > b.size(); 
	}
};

bool isPalindrome(string s)
{
	if(s.size() < 2)
		return 0;
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

int main()
{
	faster();
	string s;
	map<string, int, cmp> mp;
	while(cin >> s)
		if(isPalindrome(s))
			mp[s]++;
	for(auto x : mp)
		cout << x.first << " " << x.second << endl;
	return 0;
}