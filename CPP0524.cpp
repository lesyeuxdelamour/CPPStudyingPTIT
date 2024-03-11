#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

struct SinhVien
{
	string ID, name, IDclass;
	double a, b, c;
};

void nhap(struct SinhVien &x)
{
	cin.ignore();
	getline(cin, x.ID);
	getline(cin, x.name);
	cin >> x.IDclass;
	cin >> x.a >> x.b >> x.c;
}

void sap_xep(struct SinhVien ds[], int n)
{
	sort(ds, ds + n, [](struct SinhVien a, struct SinhVien b)
		{
			return a.ID < b.ID;
		}
		);
}

void in_ds(struct SinhVien ds[], int n)
{
	for(int i = 0; i < n; ++i)
		cout << i + 1 << " " << ds[i].ID << " " << ds[i].name << " " << ds[i].IDclass << " " << fixed << setprecision(1) << ds[i].a << " " << ds[i].b << " " << ds[i].c << endl; 
}

int main()
{
	faster();
	int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++)
    	nhap(ds[i]);
	sap_xep(ds, n);
    in_ds(ds,n);
	return 0;
}
