#include <iostream>
#include <iomanip>
#include <string>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	string s;
	int flag = 1;
	while(cin >> s)
	{
		int size = s.size();
		for(int i = 0; i < size; ++i)
			s[i] = tolower(s[i]);
		if(flag)
		{
			s[0] = toupper(s[0]);
			flag = 0;
		}
		if(s[size - 1] == '.' || s[size - 1] == '!' || s[size - 1] == '?')
		{
			s.erase(s.end() - 1);
			flag = 1;
			cout << s << endl;
		}
		else
			cout << s << " ";	
	}
	return 0;
}