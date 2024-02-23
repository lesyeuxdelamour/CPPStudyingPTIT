#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#define endl "\n"

using namespace std;
using ll = long long;

bool check(string s)
{
	int size = s.size();
	map<char, int> mp;
	for(int i = 0; i < size; ++i)
		mp[s[i]]++;
	for(auto x : mp)
		if(size - x.second < size / 2)
			return 0;
	return 1;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		cout << check(s) << endl;
	}
	return 0;
}