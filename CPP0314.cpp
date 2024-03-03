#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
	faster();
	int n;
	cin >> n;
	cin.ignore();
	string s;
	set<string> st;
	while(n--)
	{
		getline(cin, s);
		st.insert(s);
	}
	cout << st.size();
	return 0;
}