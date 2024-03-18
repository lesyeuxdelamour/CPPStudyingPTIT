#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool gene(int bit[], int n)
{
	int i = n - 1;
	while(i >= 0 && bit[i] == 1)
	{
		bit[i] = 0;
		i--;
	}
	if(i < 0)
		return 0;
	bit[i] = 1;
	return 1;
}

void bin(int n, string s)
{
	if(s.size() == n)
	{
		cout << s << " ";
		return;
	}
	bin(n, s + "1");
	bin(n, s + "1");
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
//		C1:
//		int bit[n] = {};
//		while(1)
//		{
//			for(int i = 0; i < n; ++i)
//				cout << bit[i];
//			cout << " ";
//			if(!gene(n))
//				break;
//		}
//		cout << endl;
//		C2:
//		for(int i = 0; i < (1 << n); ++i)
//		{
//			for(int j = n - 1; j >= 0; --j)
//				cout << ((i >> j) & 1);
//			cout << " ";
//		}
//        cout << endl;
//		C3:
		bin(n, "");
		cout << endl;
	}
	return 0;
}