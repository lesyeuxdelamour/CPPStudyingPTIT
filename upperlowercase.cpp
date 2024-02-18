#include <iostream>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		char c;
		cin >> c;
		if(c >= 'a' && c <= 'z')
			cout << char(c + 'A' - 'a') << endl;
		if(c >= 'A' && c <= 'Z')
			cout << char(c - 'A' + 'a') << endl;
	}
	return 0;
}