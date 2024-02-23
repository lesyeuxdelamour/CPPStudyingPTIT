#include <iostream>
#include <iomanip>
#include <vector>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	int n, x;
	cin >> n;
	vector<int> v;
	v.push_back(0);
	for(int i = 0; i < n; ++i)
	{
		cin >> x;
		if(x != 0 && x != 90)
			v.push_back(x);
	}
	v.push_back(90);
	int d[v.size()];
	for(int i = 1; i < v.size(); ++i)
		d[i] = v[i] - v[i - 1];
	int flag = 1;
	for(int i = 1; i < v.size(); ++i)
		if(d[i] > 15)
		{
			cout << v[i - 1] + 15;
			flag = 0;
			break;
		}
	if(flag)
		cout << 90;
	return 0;
}