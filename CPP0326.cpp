#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

string multiple(string a, string b)
{
	vector<string> v;
	int len = a.size() + b.size();
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	for(int i = 0; i < b.size(); ++i)
	{
		string line = "";
		int carry = 0, u = b[i] - '0';
		for(int j = 0; j < a.size(); ++j)
		{
			int tmp = ((a[j] - '0') * u) + carry;
			line += (tmp % 10) + '0';
			carry = tmp / 10;
		}
		if(carry)
			line += carry + '0';
		line.insert(0, i, '0');
		line.insert(line.size(), len - line.size(), '0');
		v.push_back(line);
	}
	string ans = "";
	int left = 0;
	for(int j = 0; j < v[0].size(); ++j)
	{
		int tmp = left;
		for(int i = 0; i < v.size(); ++i)
			tmp += v[i][j] - '0';
		ans += (tmp % 10) + '0';
		left = tmp / 10;
	}
	while(ans[ans.size() - 1] == '0')
		ans.pop_back();
	reverse(ans.begin(), ans.end());
	return ans;
}

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		string a, b;
		cin >> a >> b;
		if(a == "0" || b == "0")
			cout << 0;
		else
			cout << multiple(a, b);
		cout << endl;
	}
	return 0;
}