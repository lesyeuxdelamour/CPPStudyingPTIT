#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

class DoanhNghiep
{
	private:
		string ID, name;
		int number;
	public:
		DoanhNghiep()
		{
			this->ID = this->name = "";
			this->number = 0;
		}
		
		friend istream& operator >> (istream &in, DoanhNghiep &x)
		{	
			in >> x.ID;
			in.ignore(1, '\n');
			getline(in, x.name);
			in >> x.number;
			return in;
		}
		
		friend ostream& operator << (ostream &out, DoanhNghiep x)
		{
			out << x.ID << " " << x.name << " " << x.number << endl;
			return out;
		}
		
		int getnumber()
		{
			return this->number;
		}
		
		string getID()
		{
			return this->ID;
		}
};

bool cmp(DoanhNghiep a, DoanhNghiep b)
{
	if(a.getnumber() == b.getnumber())
		return a.getID() < b.getID();
	return a.getnumber() > b.getnumber();
}

int main()
{
	faster();
	int n, k;
	cin >> n;
	DoanhNghiep ds[n];
	for(int i = 0; i < n; ++i)
		cin >> ds[i];
	sort(ds, ds + n, cmp);
	cin >> k;
	while(k--)
	{
		int l, r;
		cin >> l >> r;
		cout << "DANH SACH DOANH NGHIEP NHAN TU " << l << " " << "DEN " << r << " " << "SINH VIEN:" << endl;
		for(int i = 0; i < n; ++i)
			if(ds[i].getnumber() >= l && ds[i].getnumber() <= r)
				cout << ds[i];
	}
	return 0;
}