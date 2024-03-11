#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
	faster();
	ifstream fin("DATA.in")
	string s;
	ll sum = 0;
	while(fin >> s)
	{
		stringstream ss(s);
		int n;
		if(ss >> n)
			sum += n;
		else
			ss.clear();
	}
	cout << sum;
	return 0;
}