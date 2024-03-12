#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

class NhanVien
{
	private:
		string ID, name, sex, dob, address, IDtax, contract;
		static int stt;
	public:
		NhanVien()
		{
			this->ID = "000";
			this->name = this->sex = this->dob = this->address = this->IDtax = this->contract = "";
		}
		
		friend istream& operator >> (istream &in, NhanVien &x)
		{
			if(!stt)
				in.ignore(1, '\n');
			stt++;
			x.ID += string((stt < 10) ? 1 : 0, '0') + to_string(stt);
			getline(in, x.name);
			getline(in, x.sex);
			getline(in, x.dob);
			getline(in, x.address);
			getline(in, x.IDtax);
			getline(in, x.contract);
			return in;
		}
		
		friend ostream& operator << (ostream &out, NhanVien x)
		{
			out << x.ID << " " << x.name << " " << x.sex << " " << x.dob << " " << x.address << " " << x.IDtax << " " << x.contract << endl;
			return out;
		}
		
		string getdob()
		{
			return this->dob;
		}
};

bool cmp(NhanVien a, NhanVien b)
{
	string dob1 = a.getdob(), dob2 = b.getdob();
	string day1, day2, month1, month2, year1, year2;
	day1 = dob1.substr(3, 4);
	month1 = dob1.substr(0, 1);
	year1 = dob1.substr(5);
	day2 = dob2.substr(3, 4);
	month2 = dob2.substr(0, 1);
	year2 = dob2.substr(5);
	if(year1 != year2)
		return year1 < year2;
	if(month1 != month2)
		return month1 < month2;
	return day1 < day2;
}

void sapxep(NhanVien ds[], int n)
{
	sort(ds, ds + n, cmp);
}

int NhanVien::stt = 0;

int main()
{
	faster();
    NhanVien ds[50];
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) 
		cin >> ds[i];
	sapxep(ds, n);
    for(int i = 0; i < n; ++i) 
		cout << ds[i];
    return 0;
}