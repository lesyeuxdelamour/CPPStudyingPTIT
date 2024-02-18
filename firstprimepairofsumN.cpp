#include <iostream>
#include <iomanip>
#include <cstring>
#define endl "\n"

using namespace std;
using ll = long long;

bool prime[1000001];
void sieve()
{
	memset(prime, true, sizeof(prime));
	prime[0] = prime[1] = false;
	for(int i = 2; i <= 1000000; ++i)
	{
		if(prime[i])
			for(int j = 2*i; j <= 1000000; j += i)
				prime[j] = false;
	}
}

int main()
{
	sieve();
	int t;
	cin >> t;
	while(t--)
	{
		int n, flag = 1;
		cin >> n;
		for(int i = 2; i <= n - 2; ++i)
			if(prime[i] && prime[n - i])
			{
				cout << i << " " << n - i << endl;
				flag = 0;
				break;
			}
		if(flag)
			cout << "-1\n";
	}
	return 0;
}