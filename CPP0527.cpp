#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

struct Time
{
	int h, m, s;
};

int main()
{
	faster();
	int n;
	cin >> n;
	Time ds[n];
	for(int i = 0; i < n; ++i)
		cin >> ds[i].h >> ds[i].m >> ds[i].s;
	sort(ds, ds + n, [](struct Time a, struct Time b)
		{
			if(a.h != b.h)
				return a.h < b.h;
			if(a.m != b.m)
				return a.m < b.m;
			return a.s < b.s; 
		}
		);
	for(int i = 0; i < n; ++i)
		cout << ds[i].h << " " << ds[i].m << " " << ds[i].s << endl;
	return 0;
}