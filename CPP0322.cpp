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

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		string a, b;
		cin >> a >> b;
		cout << add(a, b) << endl;
	}
	return 0;
}