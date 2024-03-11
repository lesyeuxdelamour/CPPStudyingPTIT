#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

struct NhanVien 
{
	string name, sex, birthdate, address, IDtax, contractdate;
};

void nhap(struct NhanVien &x)
{
	getline(cin, x.name);
	cin >> x.sex >> x.birthdate;
	cin.ignore();
	getline(cin, x.address);
	cin >> x.IDtax >> x.contractdate;
}

void in(struct NhanVien &x)
{
	cout << "00001 " << x.name << " " << x.sex << " " << x.birthdate << " " << x.address << " " << x.IDtax << " " << x.contractdate;
}

int main()
{
	faster();
	struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}