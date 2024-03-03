#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
	faster();
	string s, wrd, tmp;
	getline(cin, s);
	cin >> wrd;
	stringstream ss(s);
	while(ss >> tmp)
		if(tmp != wrd)
			cout << tmp << " ";
	return 0;
}