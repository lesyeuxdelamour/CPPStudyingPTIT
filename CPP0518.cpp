#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

struct NhanVien
{
	string ID, name, sex, birthdate, address, IDtax, contract;
};

int cnt = 0;

void nhap(struct NhanVien &x)
{
    if(cnt == 0)
        cin.ignore();
	x.ID = "000";
	if(cnt < 9)
		x.ID += '0' + to_string(cnt + 1);
	else
		x.ID += to_string(cnt + 1);
	getline(cin, x.name);
	getline(cin, x.sex);
	getline(cin, x.birthdate);
	getline(cin, x.address);
	getline(cin, x.IDtax);
	getline(cin, x.contract);
	cnt++;
}

void sapxep(struct NhanVien ds[], int n)
{
	sort(ds, ds + n, [](struct NhanVien a, struct NhanVien b)
		{
			string day1, day2, month1, month2, year1, year2;
			day1 = a.birthdate.substr(3, 4);
			month1 = a.birthdate.substr(0, 1);
			year1 = a.birthdate.substr(5);
			day2 = b.birthdate.substr(3, 4);
			month2 = b.birthdate.substr(0, 1);
			year2 = b.birthdate.substr(5);
			if(year1 != year2)
				return year1 < year2;
			if(month1 != month2)
				return month1 < month2;
			return day1 < day2;
		}
		);
}

void inds(NhanVien ds[], int n)
{
	for(int i = 0; i < n; ++i)
		cout << ds[i].ID << " " << ds[i].name << " " << ds[i].sex << " " << ds[i].birthdate << " " << ds[i].address << " " << ds[i].IDtax << " " << ds[i].contract << endl;
}

int main()
{
	faster();
    struct NhanVien ds[50];
    int N, i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}