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
		char c;
		cin >> c;
		if(c >= 'a' && c <= 'z')
			cout << char(c + 'A' - 'a') << endl;
		if(c >= 'A' && c <= 'Z')
			cout << char(c - 'A' + 'a') << endl;
	}
	return 0;
}