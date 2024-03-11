#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

struct Point
{
	int x, y;
};

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		struct Point ds[n];
		for(int i = 0; i < n; ++i)
			cin >> ds[i].x >> ds[i].y;
		double sum = 0;
		for(int i = 0; i < n - 1; ++i)
			sum += ds[i].x * ds[i + 1].y - ds[i].y * ds[i + 1].x;
		sum += ds[n - 1].x * ds[0].y - ds[n - 1].y * ds[0].x;
		cout << fixed << setprecision(3) << sum / 2 << endl;
	}
	return 0;
}