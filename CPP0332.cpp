#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

void strlower(string &s)
{
	for(int i = 0; i < s.size(); ++i)
		s[i] = tolower(s[i]);
}

int main()
{
	faster();
	string s;
	vector<string> v;
	while(cin >> s)
	{
		strlower(s);
		v.push_back(s);
	}
	cout << v[v.size() - 1];
	for(int i = 0; i < v.size() - 1; ++i)
		cout << v[i][0];
	cout << "@ptit.edu.vn";
	return 0;
}