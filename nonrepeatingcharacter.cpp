#include <iostream>
#include <iomanip>
#include <string>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int apb[26] = {};
		string s;
		cin >> s;
		for(int i = 0; i < s.size(); ++i)
			apb[s[i] - 'A']++;
		for(int i = 0; i < s.size(); ++i)
			if(apb[s[i] - 'A'] == 1)
				cout << s[i];
		cout << endl;
	}
	return 0;
}