#include <iostream>
#include <iomanip>
#include <string>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	string s;
	cin >> s;
	if(s.find("0000000") != string::npos || s.find("1111111") != string::npos)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}