#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

struct MatHang
{
	string ID, name, group;
	double loinhuan;
};

int main()
{
	faster();
	int n;
	cin >> n;
	MatHang ds[n];
	double mua, ban;
	for(int i = 0; i < n; ++i)
	{
		cin.ignore();
		ds[i].ID = to_string(i + 1);
		getline(cin, ds[i].name);
		getline(cin, ds[i].group);
		cin >> mua >> ban;
		ds[i].loinhuan = ban - mua;
	}
	sort(ds, ds + n, [](MatHang a, MatHang b)
		{
			return a.loinhuan > b.loinhuan;
		}
		);
	for(int i = 0; i < n; ++i)
		cout << ds[i].ID << " " << ds[i].name << " " << ds[i].group << " " << fixed << setprecision(2) << ds[i].loinhuan << endl;
	return 0;
}
