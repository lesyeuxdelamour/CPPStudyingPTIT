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
		string s;
		cin >> s;
		if(s == "0")
			cout << 0;
		else
		{
			vector<pair<int, int>> v;
			int a[11] = {};
			int oddMax = 10;
			for(auto x : s)
				a[x - '0']++;
			for(intdd i = 9; i > 0; --i)
				if(a[i] && a[i] % 2 == 0)
					v.push_back(make_pair(a[i] / 2, i));
				else if(a[i] > a[oddMax])
					oddMax = i;
			if(a[0] & 1)
			{
				if(a[0] > a[oddMax] && v.size() > 0)
					oddMax = 0;
			}
			else
			{
				if(v.size() > 0) // chuẩn logic cần thêm || oddMax != 10
					v.push_back(make_pair(a[0] / 2, 0));
			}
			v.push_back(make_pair(a[oddMax] / 2, oddMax));
//			sort(v.begin(), v.end(), [](auto x, auto y)  // đề như * sort số thì WA
//				{
//					return x.second > y.second;
//				}
//				);
			for(int i = 0; i < v.size(); ++i)
				for(int j = 0; j < v[i].first; ++j)
					cout << v[i].second;
			if(oddMax != 10)
				cout << oddMax;
			for(int i = v.size() - 1; i >= 0; --i)
				for(int j = 0; j < v[i].first; ++j)
					cout << v[i].second;
		}
		cout << endl;
	}
	return 0;
}