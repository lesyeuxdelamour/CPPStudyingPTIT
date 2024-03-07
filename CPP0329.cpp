#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

string add(string a, string b)
{
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	if(a.size() > b.size())
		b.insert(b.size(), a.size() - b.size(), '0');
	else
		a.insert(a.size(), b.size() - a.size(), '0');
	string sum = "";
	int left = 0;
	for(int i = 0; i < a.size(); ++i)
	{
		int tmp = a[i] + b[i] - (2 * '0') + left;
		left = tmp / 10;
		sum.push_back((char)(tmp % 10 + '0'));
	}
	if(left)
		sum.push_back((char)(left + '0'));
	reverse(sum.begin(), sum.end());
	return sum;
}

string diff(string fi, string se)
{
	string diff = "";
	reverse(fi.begin(), fi.end());
	reverse(se.begin(), se.end());
	if(fi.size() > se.size())
		se.insert(se.size(), fi.size() - se.size(), '0');
	int loan = 0;
	for(int i = 0; i < fi.size(); ++i)
	{
		int tmp = fi[i] - se[i] - loan;
		if(tmp < 0)
		{
			loan = 1;
			tmp += 10;
		}
		else
			loan = 0;
		diff.push_back((char)(tmp + '0'));
	}
	reverse(diff.begin(), diff.end());
	return diff;
}

string quot(string a, string b)
{
	if((a.size() == b.size() && a < b) || a.size() < b.size())
		return "0";
	string remain, res = "0";
	for(int i = 0; i < a.size(); ++i)
	{
		remain.push_back(a[i]);
		res.push_back('0');	
		if((remain.size() == b.size() && remain > b) || remain.size() > b.size())
		{
			int cnt = 0;
			while((remain.size() == b.size() && remain > b) || remain.size() > b.size())
			{
				cnt++;
				remain = diff(remain, b);
				while(remain[0] == '0')
					remain.erase(0, 1);
			}
			string tmp = "";
			tmp.push_back(cnt + '0');
			res = add(res, tmp);
		}
	}
	if(remain == b)
		res = add(res, "1");
	while(res[0] == '0')
		res.erase(0, 1);
	return res;
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
		cout << quot(a, b) << endl;
	}
	return 0;
}