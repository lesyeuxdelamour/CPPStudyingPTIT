#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	double c;
	cin >> c;
	double f = (c * 9 / 5) + 32;
	cout << setprecision(2) << fixed << f;
}