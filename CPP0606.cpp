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
	public:
		NhanVien()
		{
			this->ID = "00001";
			this->name = this->sex = this->dob = this->address = this->IDtax = this->contract = "";
		}
		
		friend istream& operator >> (istream &in, NhanVien &x)
		{
			getline(in, x.name);
			getline(in, x.sex);
			getline(in, x.dob);
			getline(in, x.address);
			getline(in, x.IDtax);
			getline(in, x.contract);
			return in;
		}
		
		friend ostream& operator << (ostream &out, NhanVien x) // đổi thành >> để AC do hàm main được cho sai
		{
			out << x.ID << " " << x.name << " " << x.sex << " " << x.dob << " " << x.address << " " << x.IDtax << " " << x.contract;
			return out;
		}
};

int main()
{
	faster();
	NhanVien a;
    cin >> a;
    cout << a;
	return 0;
}