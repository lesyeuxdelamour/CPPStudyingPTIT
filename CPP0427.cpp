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
		int n, cnt = 0;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		for(int i = 0; i < n - 1; ++i)	
			if(a[i + 1] && a[i] == a[i + 1])
			{
				a[i] *= 2;
				a[i + 1] = 0;
			}
		for(int i = 0; i < n; ++i)
			if(a[i])
				cout << a[i] << " ";
			else
				cnt++;
		for(int i = 0; i < cnt; ++i)
			cout << 0 << " ";
		cout << endl;
	}	
	return 0;
}