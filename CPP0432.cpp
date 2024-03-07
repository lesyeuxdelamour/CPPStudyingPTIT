#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool cmp(string a, string b)
{
	int i = 0, j = 0, k = 0;
	while(a[i] == b[j])
	{
		i++;
		j++;
		k++;
		if(i == a.size())
			i = 0;
		if(j == b.size()) 
			j = 0;
		if(k == a.size() + b.size())
			break;
	}
	return a[i] > b[j];
}

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		string a[n];
		for(int i = 0; i < n; ++i)
			cin >> a[i];
		sort(a, a + n, cmp);
		for(int i = 0; i < n; ++i)
			cout << a[i];
		cout << endl;
	}
	return 0;
}