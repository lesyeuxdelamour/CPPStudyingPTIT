#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

string Do(string s)
{
	int n = s.size();
	for(int i = n - 1; i > 0; --i)
		if(s[i] < s[i - 1])
		{
			int tmp = i;
			for(int j = i + 1; j < n; ++j)
				if(s[j] < s[i - 1] && s[j] > s[tmp])
					tmp = j;
			swap(s[i - 1], s[tmp]);
			if(s[0] == '0')
				s.erase(0, 1);
			return s;
		}
	return "-1";
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
		cout << Do(s) << endl;
	}
	return 0;
}