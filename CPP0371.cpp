#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() 
{
	faster();
	string s;
	cin >> s;
	int n = s.size();
	for(int i = 0; i < n; ++i) 
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
			s[i] = tolower(s[i]);
		if(s[i] == 'e' || s[i] == 'u' || s[i] == 'o' || s[i] == 'a' || s[i] == 'i' || s[i] == 'y') 
			continue;
		cout << '.' << s[i];
	}
	return 0;
}