#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <map>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		vector<int> a(n), b(m), v;
		map<int, int> mp;
		for(int i = 0; i < n; ++i)
		{
			cin >> a[i];
			mp[a[i]]++;
		}
		for(int i = 0; i < m; ++i)
			cin >> b[i];
		sort(a.begin(), a.end());
		for(auto x : b)
		{
			int k = mp[x];
			for(int i = 0; i < k; ++i)
			{
				v.push_back(x);
				mp[x]--;
			}
		}
		for(auto x : a)
			if(mp[x])
				v.push_back(x);
		for(auto x : v)
			cout << x << " ";
		cout << endl;
	}
	return 0;
}