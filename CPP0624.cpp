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
		
		bool isMajor(string s)
		{
			if(this->IDclass[0] == 'E' && (this->ID[5] == 'C' || this->ID[5] == 'A'))
				return 0;
			string major = this->ID.substr(5, 2);
			return major == s;
		}
};

string ID(string s)
{
	if(s == "KE TOAN")
		return "KT";
	if(s == "CONG NGHE THONG TIN")
		return "CN";
	if(s == "AN TOAN THONG TIN")
		return "AT";
	if(s == "VIEN THONG")
		return "VT";
	if(s == "DIEN TU")
		return "DT";
	return "";
}

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
    cin.ignore(1, '\n');
    while(k--)
    {
    	string s;
    	getline(cin, s);
    	for(int i = 0; i < s.size(); ++i)
    		s[i] = toupper(s[i]);
    	cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl; 
	    for(int i = 0; i < n; ++i)
	    	if(ds[i].isMajor(ID(s)))
	    		cout << ds[i];
	}
	return 0;
}