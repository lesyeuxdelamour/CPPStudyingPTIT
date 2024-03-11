#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

string f(char c)
{
	switch(c)
	{
		case '2':
			return "2";
		case '3':
			return "3";
		case '4':
			return "322";
		case '5':
			return "5";
		case '6':
			return "53";
		case '7':
			return "7";
		case '8':
			return "7222";
		case '9':
			return "7332";
		default:
			return "1";
	}	
		
}

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		string s, ans = "";
		cin >> n >> s;
		for(int i = 0; i < n; ++i)
			ans += f(s[i]);
		sort(ans.begin(), ans.end(), greater<char>());
		while(ans.back() == '1')
			ans.erase(ans.end() - 1);
		cout << ans << endl;
	}
	return 0;
}