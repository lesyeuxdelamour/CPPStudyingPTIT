#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
	faster();
	string s;
	cin >> s;
	int res = 0, len = 0, flag = 1;
	for(int i = s.size() - 1; i >= 0; --i)
	{
		if(flag)
		{
			if(s[i] == 'B')
				len++;
			else
			{
				if(len == 1)
					res++;
				else if(len > 1)
				{
					res++;
					i++;
					flag = 0;
				}
				len = 0;
			}
		}
		else
		{
			if(s[i] == 'A')
				len++;
			else
			{
				if(len == 1)
					res++;
				else if(len > 1)
				{
					res++;
					i++;
					flag = 1;
				}
				len = 0;
			}
		}
	}
	if(len)
		res++;
	cout << res;
	return 0;
}

// có cách hay hơn nhưng chưa tham khảo