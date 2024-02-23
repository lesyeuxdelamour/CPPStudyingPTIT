#include <iostream>
#include <iomanip>
#include <string>
#define endl "\n"

using namespace std;
using ll = long long;

bool isLucky(int n)
{
	if(n < 10)
		return n == 9;
	int sumD = 0;
	while(n)
	{
		sumD += n % 10;
		n /= 10;
	}
	return isLucky(sumD);
}
		
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int n = 0;
		for(int i = 0; i < s.size(); ++i)
			n += s[i] - '0';
		cout << isLucky(n) << endl;
	}	
	return 0;
}