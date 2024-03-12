#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

class SinhVien
{
	private:
		string ID, name, IDclass, dob;
		double GPA;
	public:
		SinhVien()
		{
			this->ID = "B20DCCN001";
			this->name = this->IDclass = this->dob = "";
			this->GPA = 0;
		}
		
		void nhap()
		{
			getline(cin, name);
			getline(cin, IDclass);
			getline(cin, dob);
			if(dob[1] == '/')
				dob.insert(0, "0");
			if(dob[4] == '/')
				dob.insert(3, "0");
			cin >> GPA;
		}
		
		void xuat()
		{
			cout << ID << " " << name << " " << IDclass << " " << dob << " " << fixed << setprecision(2) << GPA;
		}
};

int main()
{
	faster();
	SinhVien a;
	a.nhap();
	a.xuat();
	return 0;
}