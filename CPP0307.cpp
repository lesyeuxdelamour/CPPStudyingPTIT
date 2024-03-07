#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

set<string> convert(string s)
{
	string tmp;
	set<string> st;
	stringstream ss(s);
	while(ss >> tmp)
		st.insert(tmp);
	return st;
}

int main()
{
	faster();
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s1, s2, s;
		getline(cin, s1);
		getline(cin, s2);
		set<string> st1 = convert(s1);
		set<string> st2 = convert(s2);
		for(auto x : st1)
		{
			int flag = 1;
			for(auto y : st2)
				if(x == y)
				{
					flag = 0;
					break;
				}
			if(flag)
				cout << x << " ";	
		}
		cout << endl;
	}
	return 0;
}