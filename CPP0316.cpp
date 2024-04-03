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
		int n = 0;
		for(int i = 0; i < s.size(); ++i)
			n += s[i] - '0';
		if(n == 0 || n % 9)
		    cout << 0;
		else
		    cout << 1;
		cout << endl;
	}
	return 0;
}