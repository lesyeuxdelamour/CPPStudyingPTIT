#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

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

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		string a, b;
		cin >> a >> b;
		if(a == b)
			cout << 0 << endl;
		if(a.size() > b.size() || a.size() == b.size() && a > b)
			cout << diff(a, b);
		else
			cout << diff(b, a);
		cout << endl;
	}
	return 0;
}