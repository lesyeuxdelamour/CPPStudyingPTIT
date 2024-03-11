#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);

using namespace std;
using ll = long long;

struct SinhVien
{
	string name, IDclass, birthdate;
	double GPA;
};

void nhap(struct SinhVien &x)
{
	getline(cin, x.name);
	cin >> x.IDclass >> x.birthdate >> x.GPA;
	if(x.birthdate[1] == '/')
		x.birthdate.insert(0, "0");
	if(x.birthdate[4] == '/')
		x.birthdate.insert(3, "0");
}

void in(struct SinhVien &x)
{
	cout << "B20DCCN001 " << x.name << " " << x.IDclass << " " << x.birthdate << " ";
	cout << fixed << setprecision(2) << x.GPA;
}

int main()
{
	struct SinhVien a;
    nhap(a);
    in(a);
	return 0;
}