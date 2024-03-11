#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

class IntSet
{
	private:
		int n, m;
		int a[101], b[101];
	public:
		void input();
		void intersect();
};

void IntSet::input()
{
	ifstream fin("DATA.in");
	fin >> n >> m;
	for(int i = 0; i < n; ++i)
		fin >> a[i];
	for(int i = 0; i < m; ++i)
		fin >> b[i];
}

void IntSet::intersect()
{
	map<int, int> mp;
	for(int i = 0; i < n; ++i)
		mp[a[i]] = 1;
	for(int i = 0; i < m; ++i)
	    if(mp[b[i]] == 1)
		    mp[b[i]] = 2;
	for(auto x : mp)
		if(x.second == 2)
			cout << x.first << " ";
}

int main()
{
	faster();
	IntSet x;
	x.input();
	x.intersect();
	return 0;
}