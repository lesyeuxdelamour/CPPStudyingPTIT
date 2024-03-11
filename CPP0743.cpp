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
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin, s);
		stack<string> st;
		stringstream ss(s);
		while(ss >> s)
			st.push(s);
		while(!st.empty())
		{
			cout << st.top() << " ";
			st.pop();
		}
		cout << endl;
	}
	return 0;
}