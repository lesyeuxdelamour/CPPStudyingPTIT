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
	int pos = s.find('.');
	string dot = s.substr(pos);
	if(dot == ".py" || dot == ".PY" || dot == ".pY" || dot == ".Py")
		cout << "yes";
	else
		cout << "no";
	return 0;
}