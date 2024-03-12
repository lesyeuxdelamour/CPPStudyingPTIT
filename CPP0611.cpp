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
		static int stt;
	public:
		SinhVien()
		{
			this->ID = "B20DCCN0";
			this->name = this->IDclass = this->dob = "";
			this->GPA = 0;
		}
		
		friend istream& operator >> (istream &in, SinhVien &x)
		{
			stt++;
			x.ID += string(stt < 10, '0') + to_string(stt);
			in.ignore(1, '\n');
			getline(in, x.name);
			getline(in, x.IDclass);
			getline(in, x.dob);
			if(x.dob[1] == '/')
				x.dob.insert(0, "0");
			if(x.dob[4] == '/')
				x.dob.insert(3, "0");
			in >> x.GPA;
			return in;
		}
		
		friend ostream& operator << (ostream &out, SinhVien x)
		{
			out << x.ID << " " << x.name << " " << x.IDclass << " " << x.dob << " " << fixed << setprecision(2) << x.GPA << endl;
			return out;
		}
};

int SinhVien::stt = 0;

int main()
{
	faster();
	SinhVien ds[50];
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> ds[i];
    for(int i = 0; i < n; ++i)
    	cout << ds[i];
	return 0;
}