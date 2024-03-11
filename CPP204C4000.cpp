#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

struct SinhVien
{
	string ID, name, IDclass, birthdate;
	double GPA;
};

void nhapThongTinSV(struct SinhVien &x)
{
	getline(cin, x.name);
	cin >> x.IDclass >> x.birthdate >> x.GPA;
	if(x.birthdate[1] == '/')
		x.birthdate.insert(0, "0");
	if(x.birthdate[4] == '/')
		x.birthdate.insert(3, "0");
}

void inThongTinSV(struct SinhVien x)
{
	cout << "N20DCCN001 " << x.name << " " << x.IDclass << " " << x.birthdate << " " << fixed << setprecision(2) << x.GPA; 
}

int main()
{
	faster();
	struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
	return 0;
}