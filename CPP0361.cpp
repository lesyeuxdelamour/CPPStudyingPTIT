#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
	faster();
	int n;
	cin >> n;
	string s;
	map<string, int> mp;
	while(n--)
	{
		cin >> s;
		mp[s]++;
	}
	ll cnt = 0;
	map<string, int>::iterator it1, it2, it3;
	for(it1 = mp.begin(); it1 != mp.end(); ++it1)
	{
	    cnt += it1->second * (it1->second - 1);
		it1++;
		it3 = it1;
		it1--;
		for(it2 = it3; it2 != mp.end(); ++it2)
		{                                  
			if(it3->first != it2->first && it2->first.find(it3->first) != string::npos)
				cnt += it3->second * it2->second;
		}
	}
	cout << cnt;
	return 0;
}