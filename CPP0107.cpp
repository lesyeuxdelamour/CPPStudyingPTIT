#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
char fi[16] = "ABBADCCABDCCABD";
char se[16] = "ACCABCDDBBCDDBB";

double mark(char ans[15], int n)
{
	double mark = 10.0;
	if(n == 101)
	{
		for(int i = 0; i < 15; ++i)
			if(ans[i] != fi[i])
				mark -= 10.0/15;
	}
	if(n == 102)
	{
		for(int i = 0; i < 15; ++i)
			if(ans[i] != se[i])
				mark -= 10.0/15;
	}
	return mark;
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
		char ans[15];
		for(int i = 0; i < 15; ++i)
			cin >> ans[i];
		cout << fixed << setprecision(2) << mark(ans, n) << endl; 
	}
	return 0;
}