#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

void standard(string &s)
{
	s[0] = toupper(s[0]);
	for(int i = 1; i < s.size(); ++i)
		s[i] = tolower(s[i]);
}

void strupper(string &s)
{
	for(int i = 1; i < s.size(); ++i)
		s[i] = toupper(s[i]);
}

int main()
{
	faster();
	string s;
	vector<string> v;
	while(cin >> s)
	{
		standard(s);
		v.push_back(s);
	}
	for(int i = 0; i < v.size() - 1; ++i)
	{
		cout << v[i];
		if(i < v.size() - 2)
		    cout << " ";
	}
	strupper(v[v.size() - 1]);
	cout << ", " << v[v.size() - 1];
	return 0;
}