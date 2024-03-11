#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

struct SinhVien
{
	int STT;
	string ID, name, IDclass, email, enterprise;
};

int main()
{
	faster();
	int n, q;
	cin >> n;
	cin.ignore();
	SinhVien ds[n];
	for(int i = 0; i < n; ++i)
	{
		ds[i].STT = i + 1;
		getline(cin, ds[i].ID);
		getline(cin, ds[i].name);
		getline(cin, ds[i].IDclass);
		getline(cin, ds[i].email);
		getline(cin, ds[i].enterprise);
	}
	sort(ds, ds + n, [](struct SinhVien a, struct SinhVien b)
		{
			return a.name < b.name;
		}
		);
	cin >> q;
	while(q--)
	{
		string s;
		cin >> s;
		for(int i = 0; i < n; ++i)
			if(ds[i].enterprise == s)
				cout << ds[i].STT << " " << ds[i].ID << " " << ds[i].name << " " << ds[i].IDclass << " " << ds[i].email << " " << ds[i].enterprise << endl;
	}
	return 0;
}
