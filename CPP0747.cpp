#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
	faster();
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	// Không có 2 dòng này thì WA ?? :)
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int n = s.size();
		/*
		while(s.find("100") != string::npos)
		{
			int pos = s.find("100");
			s.erase(pos, 3);
		}
		*/ // Testcase sai :))
		for(int i = 0; i < s.size() - 2; ++i)
			if(s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '0')
			{
				s.erase(i, 3);
				i -= 2;
			}
		cout << n - s.size() << endl;
	}
	return 0;
}