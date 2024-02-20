#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	string s;
	cin >> s;
	reverse(s.begin(), s.end());
	cout << s;
	return 0;
}