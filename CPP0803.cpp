#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
	faster();
	ifstream fin("DATA.in");
	map<int, int> mp;
	int n;
	while(fin >> n)
		mp[n]++;
	for(auto x : mp)
		cout << x.first << " " << x.second << endl;
	return 0;
}