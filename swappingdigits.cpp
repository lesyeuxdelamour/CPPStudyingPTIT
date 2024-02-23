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
		string s;
		cin >> s;
		int flag = 1;
		for(int i = s.size() - 1; i > 0; --i)
			if(s[i] < s[i - 1])
			{
				int tmp = 0, k;
				for(int j = i; j < s.size(); ++j)
				{
					if(s[j] < s[i - 1] && s[j] > tmp)
					{
						tmp = s[j];
						k = j;
					}
				}
				swap(s[i - 1], s[k]);
				cout << s << endl;
				flag = 0;
				break;
			}
		if(flag)
			cout << -1 << endl;
	}
	return 0;
}