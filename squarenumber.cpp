#include <iostream>
#include <iomanip>
#include <math.h>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	int a, b;
	cin >> a >> b;
	a = ceil(sqrt(a));
	b = floor(sqrt(b));
	ll sum = 0;
	for(int i = a; i <= b; ++i)
		sum += i * i;
	cout << sum;
	return 0;
}