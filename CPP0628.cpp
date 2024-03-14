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
			in.ignore(1, '\n');
			getline(in, x.ID);
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
	int n;
	cin >> n;
	DoanhNghiep ds[n];
	for(int i = 0; i < n; ++i)
		cin >> ds[i];
	sort(ds, ds + n, cmp);
	for(int i = 0; i < n; ++i)
		cout << ds[i];
	return 0;
}