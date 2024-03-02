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
		int n, k;
		cin >> n >> k;
		int a[n];
		deque<int> dq;
		for(auto &x : a)
			cin >> x;
		for(int i = 0; i < n; ++i)
		{
			while(!dq.empty() && a[dq.back()] <= a[i]) // delete the value smaller than current highest value
				dq.pop_back();
			dq.push_back(i); 
			while(dq.front() + k <= i) // delete the value which is out of range
				dq.pop_front();
			if(i >= k - 1) // completed first subarray
				cout << a[dq.front()] << " ";
		}
		cout << endl;
	}
	return 0;
}