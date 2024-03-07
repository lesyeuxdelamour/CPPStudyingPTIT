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
	int t;
	cin >> t;
	cin.ignore();
	map<string, int> mp;
	while(t--)
	{
		string s, tmp = "";
		getline(cin, s);
		stringstream ss(s);
		vector<string> v;
		while(ss >> s)
		{
			strlower(s);
			v.push_back(s);
		}
		tmp += v[v.size() - 1];
		for(int i = 0; i < v.size() - 1; ++i)
			tmp += v[i][0];
		mp[tmp]++;
		cout << tmp;
		if(mp[tmp] > 1)
			cout << mp[tmp];
		cout << "@ptit.edu.vn" << endl;
	}
	return 0;
}
