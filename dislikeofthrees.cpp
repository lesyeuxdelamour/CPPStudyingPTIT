#include <iostream>
#include <iomanip>
#include <vector>
#define endl "\n"

using namespace std;
using ll = long long;

vector<int> v;

void sieve()
{
	int a[2001];
	memset(a, true, sizeof(a));
	for(int i = 0; i < 2000; ++i)
	{
		if(i % 3 == 0 || i % 10 == 3)
			a[i] = false;
	}
	for(int i = 0; i < 2000; ++i)
		if(a[i])
			v.push_back(i);
}

int main()
{
	sieve();
	int n;
	cin >> n;
	cout << v[n - 1];
	return 0;
}