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
	ifstream fin1("DATA1.in");
	ifstream fin2("DATA2.in");
	string s;
	set<string> se, uni, inter;
	while(fin1 >> s)
	{
		s = strlower(s);
		se.insert(s);
		uni.insert(s);
	}
	while(fin2 >> s)
	{
		s = strlower(s);
		if(se.find(s) != se.end())
			inter.insert(s);
		uni.insert(s);
	}
	for(auto x : uni)
		cout << x << " ";
	cout << endl;
	for(auto x : inter)
		cout << x << " ";
	return 0;
}