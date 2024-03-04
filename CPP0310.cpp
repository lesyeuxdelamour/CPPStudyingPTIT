#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll five(string s)
{
	for(int i = 0; i < s.size(); ++i)
		if(s[i] == '6')
			s[i] = '5';
	return stoll(s);
}

ll six(string s)
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
		string s1, s2;
		cin >> s1 >> s2;
		ll MIN = five(s1) + five(s2);
		ll MAX = six(s1) + six(s2);
		cout << MIN << " " << MAX << endl;
	}
	return 0;
}