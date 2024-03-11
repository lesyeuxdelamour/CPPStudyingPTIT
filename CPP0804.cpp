#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

string strlower(string s)
{
	string tmp = "";
	for(int i = 0; i < s.size(); ++i)
		tmp += tolower(s[i]);
	return tmp;
}

int main()
{
	faster();
	ifstream fin("VANBAN.in");
	string s;
	set<string> se;
	while(fin >> s)
		se.insert(strlower(s));
	for(auto x : se)
		cout << x << endl;
	return 0;
}