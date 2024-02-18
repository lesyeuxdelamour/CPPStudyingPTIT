#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;
using ll = long long;

ll fibo[93];

void dpFibo()
{
	fibo[0] = 0;
	fibo[1] = fibo[2] = 1;
	for(int i = 3; i <= 92; ++i)
		fibo[i] = fibo[i - 1] + fibo[i - 2];
}

bool isFibo(ll n, ll fibo[])
{
	for(int i = 0; i <= 92; ++i)
		if(n == fibo[i])
			return 1;
	return 0;
}

int main()
{
	dpFibo();
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		ll arr[n];
		map<ll, ll> mp;
		for(int i = 0; i < n; ++i)
			cin >> arr[i];
		for(int i = 0; i < n; ++i)
		{
			if(isFibo(arr[i], fibo))
				cout << arr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}