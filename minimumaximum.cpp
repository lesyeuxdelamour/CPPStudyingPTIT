#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;
using ll = long long;

string max(string s, int n)
{
	for(int i = 0; i < s.size(); ++i)
	{
		if(n >= 9)
		{
			s[i] = '9';
			n -= 9;
		}
		else
		{
			s[i] = n + '0';
			n = 0;
		}
	}
	if(n == 0)
		return s;
	return "-1";
}

string min(string s, int n)
{
	for(int i = s.size() - 1; i > 0; --i)
	{
		if(n > 9)
		{
			s[i] = '9';
			n -= 9;
		}
		else
		{
			s[i] = n - 1 + '0';1 1
			n = 1;
		}
	}
	if(n <= 9)
	{
		s[0] = n + '0';
		return s;
	}
	return "-1";
}

int main()
{
	int m, sum;
	cin >> m >> sum;
	string s = "";
	for(int i = 0; i < m; ++i)
		s += "0";
	cout << min(s, sum) << " " << max(s, sum);
	return 0; 
}