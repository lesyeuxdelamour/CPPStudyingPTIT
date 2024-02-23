#include <iostream>
#include <iomanip>
#include <deque>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
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