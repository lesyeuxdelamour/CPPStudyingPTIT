#include <iostream>
#define endl "\n"

using namespace std;
using ll = long long;

bool lucky(string s)
{
	for(auto x : s)
		if(x != '0' && x != '6' && x != '8')
			return 0;
	return 1;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		cout << (lucky(s) ? "YES" : "NO") << endl;
	}
	return 0;
}