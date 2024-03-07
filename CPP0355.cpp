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
	int flag = 1;
	while(cin >> s)
	{
		int n = s.size();
		for(int i = 0; i < n; ++i)
			s[i] = tolower(s[i]);
		if(flag)
		{
			s[0] = toupper(s[0]);
			flag = 0;
		}
		if(s[n - 1] == '.' || s[n - 1] == '!' || s[n - 1] == '?')
		{
			s.erase(s.end() - 1);
			flag = 1;
			cout << s << endl;
		}
		else
			cout << s << " ";	
	}
	
	return 0;
}