#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	int n;
	cin >> n;
	int y = n / 365;
	n %= 365;
	int w = n / 7;
	n %= 7;
	cout << y << " " << w << " " << n;
}