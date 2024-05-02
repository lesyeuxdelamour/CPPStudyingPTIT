#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
//	faster(); // ch?m hon 2s
	cin.tie(0); cout.tie(0);
	int n; 
	cin >> n;
	string s;
	vector<string> v;
	while(n--)
	{
		cin >> s;
		v.push_back(s);
	}
	sort(v.begin(), v.end(), [](string a, string b)
		{
			if(a.size() == b.size())
				return a > b;
			return a.size() > b.size();
		}
		);
	int ans = 0, size = v.size();
	for(int i = 0; i < size - 1; ++i)
		for(int j = i + 1; j < size; ++j)
			if(v[i] == v[j])
				ans += 2;
			else if(v[i].find(v[j]) != string::npos)
				ans += 1;
	cout << ans;
	return 0;
}