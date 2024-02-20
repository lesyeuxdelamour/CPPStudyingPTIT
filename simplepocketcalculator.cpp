#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	double a, b;
	char c;
	cin >> a >> c >> b;
	switch(c)
	{
		case '+':
			cout << setprecision(2) << fixed << a + b;
			break;
		case '-':
			cout << setprecision(2) << fixed << a - b;
			break;
		case '*':
			cout << setprecision(2) << fixed << a * b;
			break;
		case '/':
			if(b == 0)
				cout << "Math Error";
			else
				cout << setprecision(2) << fixed << a / b;
			break;
	}
	return 0;
}