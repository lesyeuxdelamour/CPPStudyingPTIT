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
	while(t--)
	{
		string s;
		int k;
		cin >> s >> k; 
		set<char> st;
		for(int i = 0; i < s.size(); ++i)
			st.insert(tolower(s[i]));
		if(26 - st.size() > k)
			cout << 0 << endl;
		else
			cout << 1 << endl;
	}
	return 0;
}