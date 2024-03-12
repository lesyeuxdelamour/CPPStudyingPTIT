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
			out << x.ID << " " << x.name << " " << x.IDclass << " " << x.email << endl;
			return out;
		}
		
		bool isClass(string s)
		{
			return this->IDclass == s;
		}
};

int main()
{
	faster();
    int n, k;
    cin >> n;
    SinhVien ds[n];
    cin.ignore(1, '\n');
    for(int i = 0; i < n; ++i)
        cin >> ds[i];
    cin >> k;
    while(k--)
    {
    	string s;
    	cin >> s;
    	cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl; 
	    for(int i = 0; i < n; ++i)
	    	if(ds[i].isClass(s))
	    		cout << ds[i];
	}
	return 0;
}