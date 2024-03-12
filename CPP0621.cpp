#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

class SinhVien
{
	private:
		string ID, name, IDclass, email;
	public:
		SinhVien()
		{
			this->ID = this->name = this->IDclass = this->email = "";
		}
		
		friend istream& operator >> (istream &in, SinhVien &x)
		{
			getline(in, x.ID);
			getline(in, x.name);
			getline(in, x.IDclass);
			getline(in, x.email);
			return in;
		}
		
		friend ostream& operator << (ostream &out, SinhVien x)
		{
			cout << x.ID << " " << x.name << " " << x.IDclass << " " << x.email << endl;
			return out;
		}
		
		string getID()
		{
			return this->ID;
		}
};

bool cmp(SinhVien a, SinhVien b)
{
	return a.getID() < b.getID();
}

int main()
{
	faster();
	SinhVien x;
    vector<SinhVien> ds;
    while(cin >> x)
        ds.push_back(x);
	sort(ds.begin(), ds.end(), cmp);
    for(auto y : ds)
    	cout << y;
	return 0;
}