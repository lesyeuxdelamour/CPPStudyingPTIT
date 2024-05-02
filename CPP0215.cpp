#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll MIN(string s)
{
	for(int i = 0; i < s.size(); ++i)
		if(s[i] == '6')
			s[i] = '5';
	return stoll(s);
}

ll MAX(string s)
{
	for(int i = 0; i < s.size(); ++i)
		if(s[i] == '5')
			s[i] = '6';
	return stoll(s);
}

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		string a, b;
		cin >> a >> b;
		cout << MIN(a) + MIN(b) << " " << MAX(a) + MAX(b) << endl;
	}
	return 0;
}