#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

string add(string fi, string se)
{
	string sum = "";
	reverse(fi.begin(), fi.end());
	reverse(se.begin(), se.end());
	if(fi.size() > se.size())
		se.insert(se.size(), fi.size() - se.size(), '0');
	else
		fi.insert(fi.size(), se.size() - fi.size(), '0');
	int left = 0;
	for(int i = 0; i < fi.size(); ++i)
	{
		int tmp = fi[i] + se[i] - (2 * '0') + left;
		left = tmp / 10;
		sum.push_back((char)(tmp % 10 + '0'));
	}
	if(left)
		sum.push_back((char)(left + '0'));
	reverse(sum.begin(), sum.end());
	return sum;
}

bool isSumString(string s, int start, int len1, int len2)
{
	string s1 = s.substr(start, len1);
	string s2 = s.substr(start + len1, len2);
	string s3 = add(s1, s2);
	int len3 = s3.size();
	if(len3 > s.size() - len1 - len2 - start)
		return 0;
	if(s3 == s.substr(start + len1 + len2, len3))
	{
		if(start + len1 + len2 + len3 == s.size())
			return 1;
		return isSumString(s, start + len1, len2, len3);
	}
	return 0;
}

bool check(string s, int n)
{
	for(int i = 1; i < n - 1; ++i)
		for(int j = 1; j < n - i; ++j)
			if(isSumString(s, 0, i, j))
				return 1;
	return 0;
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
		int n = s.size();
		cout << (check(s, n) ? "Yes\n" : "No\n");
	}
	return 0;
}