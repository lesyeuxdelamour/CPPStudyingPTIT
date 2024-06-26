#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int check(string s)
{
	int sum = 0;
	for(int i = 0; i < s.size(); ++i)
	{
	    s[i] -= '0';
	    if(i & 1)
	        sum += s[i];
	    else
	        sum -= s[i];
	}
	return sum % 11 == 0;
}

int main()
{
 	faster();
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		cout << check(s) << endl;
	}
	return 0;
}