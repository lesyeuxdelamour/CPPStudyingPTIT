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

void nhap(struct SinhVien a[], int n)
{
	for(int i = 0; i < n; ++i)
	{
		cin.ignore();
		a[i].ID = "B23DCCN0";
		if(i < 9)
			a[i].ID += '0' + to_string(i + 1);
		else
			a[i].ID += to_string(i + 1);
		getline(cin, a[i].name);
		cin >> a[i].IDclass >> a[i].birthdate >> a[i].GPA;
		if(a[i].birthdate[1] == '/')
			a[i].birthdate.insert(0, "0");
		if(a[i].birthdate[4] == '/')
			a[i].birthdate.insert(3, "0");
	}
}

void in(struct SinhVien a[], int n)
{
	for(int i = 0; i < n; ++i)
	{
	    cout << a[i].ID << " " << a[i].name << " " << a[i].IDclass << " " << a[i].birthdate << " ";
		cout << fixed << setprecision(2) << a[i].GPA << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}