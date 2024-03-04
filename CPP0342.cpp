#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		multiset<char> multist;
		ll sum = 0;
		for(int i = 0; i < s.size(); ++i)
		{
			if(isalpha(s[i]))
				multist.insert(s[i]);
			else
				sum += s[i] - '0';
		}
		for(auto x : multist)
			cout << x;
		cout << sum << endl;
	}
	return 0;
}