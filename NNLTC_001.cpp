#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
const int MAXLIST = 10000;

struct data
{ 
	int size, nodes[MAXLIST];            
} ds;

int main()
{
	faster();
	int x, cnt = 0;
	map<int, int> mp;
	while(cin >> x)
	{
		ds.nodes[cnt++] = x;
		mp[x]++;
	}
	ds.size = cnt;
	for(int i = 0; i < ds.size; ++i)
		if(mp[ds.nodes[i]])
		{
			cout << ds.nodes[i] << " " << mp[ds.nodes[i]] << endl;
			mp[ds.nodes[i]] = 0;
		}
	return 0;
}