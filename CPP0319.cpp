#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
	faster();
	int n, s;
	cin >> n >> s;
	string sMin = "", sMax = "";
	if(s == 0 && n == 1)
		cout << "0 0";
	else if(s == 0 || s > 9 * n)
		cout << "-1 -1";
	else
	{
		sMin.insert(0, s / 9, '9');
		sMax.insert(0, s / 9, '9');
		s %= 9;
		int flag = 0;
		if(s)
		{
			flag = 1;
			sMin.insert(sMin.begin(), (char)(s - 1 + '0'));
			sMax.push_back((char)(s + '0'));
		}
		sMin.insert(0, n - sMin.size(), '0');
		sMax.insert(sMax.size(), n - sMax.size(), '0');
		if(flag)
			sMin[0]++;
		cout << sMin << " " << sMax;
	}
	return 0; 
}