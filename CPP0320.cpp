#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int isEnough(string s)
{
	if(s[0] == '0')
		return -1;
	set<char> st;
	for(auto x : s)
	{
		if(!isdigit(x))
			return -1;
		st.insert(x);
	}
	return st.size() == 10;	
}

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		if(isEnough(s) == -1)
			cout << "INVALID";
		else if(isEnough(s) == 1)
			cout << "YES";
		else
			cout << "NO";
		cout << endl;
	}
	return 0;
}