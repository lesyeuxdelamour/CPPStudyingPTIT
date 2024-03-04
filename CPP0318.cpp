#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool isPretty(string s)
{
	if(s[0] == s[1] && s[1] == s[2] && s[3] == s[4])
		return 1;
	int flag1 = 1, flag2 = 1;
	for(int i = 0; i < 5; ++i)
	{
		if(s[i] != '6' && s[i] != '8')
			flag1 = 0;
		if(i && s[i] <= s[i - 1])
			flag2 = 0;
	}		
	if(flag1 || flag2)
		return 1;
	return 0;
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
		int pos = s.find("-") + 1;
		string n = "";
		for(int i = pos; i < s.size(); ++i)
			if(isdigit(s[i]))
				n += s[i];
		cout << (isPretty(n) ? "YES\n" : "NO\n") << endl;
	}
	return 0;
}