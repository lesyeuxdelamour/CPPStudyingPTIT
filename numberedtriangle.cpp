#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	int n;
	cin >> n;
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= 2*i - 1; ++j)
			cout << j;
		cout << endl;
	}
	return 0;
}