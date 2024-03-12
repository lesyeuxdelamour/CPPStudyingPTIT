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
};

int NhanVien::stt = 0;     
 
int main()
{
	faster();
    NhanVien ds[50];
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) 
		cin >> ds[i];
    for(int i = 0; i < n; ++i) 
		cout << ds[i];
    return 0;
}