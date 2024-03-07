#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

void standard(string s, int n)
{	
	string tmp;
	vector<string> v;
	stringstream ss(s);
	while(ss >> tmp)
	{
		tmp[0] = toupper(tmp[0]);
		for(int i = 1; i < tmp.size(); ++i)
			tmp[i] = tolower(tmp[i]);
		v.push_back(tmp);
	}
	if(n == 1)
	{
		cout << v[v.size() - 1] << " ";
		for(int i = 0; i < v.size() - 1; ++i)
			cout << v[i] << " ";
	}
	if(n == 2)
	{
		for(int i = 1; i < v.size(); ++i)
			cout << v[i] << " ";
		cout << v[0];
	}
	cout << endl;
}

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		string s;
		cin >> n;
		cin.ignore();
		getline(cin, s);
		standard(s, n);
	}
	return 0;
}
