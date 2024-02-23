#include <iostream>
#include <iomanip>
#include <string>
#include <set>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s1, s2, s;
		getline(cin, s1);
		getline(cin, s2);
		set<string> st1, st2;
		stringstream ss1(s1);
		while(ss1 >> s)
			st1.insert(s);
		stringstream ss2(s2);
		while(ss2 >> s)
			st2.insert(s);
		for(auto x : st1)
		{
			int flag = 1;
			for(auto y : st2)
				if(x == y)
				{
					flag = 0;
					break;
				}
			if(flag)
				cout << x << " ";	
		}
		cout << endl;
	}
	return 0;
}