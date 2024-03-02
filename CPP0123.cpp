#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool isPrime(int n)
{
	for(int i = 2; i <= sqrt(n); ++i)
		if(n % i == 0)
			return 0;
	return n > 1;
}

int main()
{
	faster();
	int n;
	cin >> n;
	cout << (isPrime(n) ? "YES" : "NO");
	return 0;
}