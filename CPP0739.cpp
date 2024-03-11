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
		stack<int> st;
		int cnt = 1;
		st.push(cnt);
		for(int i = 0; i < s.size(); ++i)
		{
			cnt++;
			if(s[i] == 'I')
				while(!st.empty())
				{
					cout << st.top();
					st.pop();
				}
			st.push(cnt);
		}
		while(!st.empty())
		{
			cout << st.top();
			st.pop();
		}
		cout << endl;
	}
	return 0;
}