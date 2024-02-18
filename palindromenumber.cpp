#include <iostream>
#define endl "\n"

using namespace std;
using ll = long long;

bool palind(string s)
{
	int l = 0, r = s.size() - 1;
	while(l < r)
	{
		if(s[l] != s[r])
			return 0;
		l++;
		r--;
	}
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
		cout << (palind(s) ? "YES" : "NO") << endl;
	}
	return 0;
}