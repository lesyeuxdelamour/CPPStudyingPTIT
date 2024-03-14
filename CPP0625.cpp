#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

class GiangVien
{
	private:
		string ID, name, lastname, major;
		static int stt;
	public:
		GiangVien()
		{
			this->ID = "GV";
			this->name = this->lastname = this->major = "";
		}
		friend istream& operator >> (istream &in, GiangVien &x)
		{
			stt++;
			x.ID += string((stt < 10) ? 1 : 0, '0') + to_string(stt);
			getline(in, x.name);
			getline(in, x.major);
			stringstream ss(x.major);	
			string token, res = "";
			while(ss >> token)
				res += toupper(token[0]);
			x.major = res;
			return in;
		}
		
		friend ostream& operator << (ostream &out, GiangVien x)
		{
			out << x.ID << " " << x.name << " " << x.major << endl;
			return out;
		}
		
		string getlastname()
		{
			vector<string> v;
			stringstream ss(this->name);
			string token;
			while(ss >> token)
				v.push_back(token);
			return v.back();
		}
		
		string getID()
		{
			return this->ID;
		}
};

int GiangVien::stt = 0;

bool cmp(GiangVien a, GiangVien b)
{
	if(a.getlastname() == b.getlastname())
		return a.getID() < b.getID();
	return a.getlastname() < b.getlastname();
}

int main()
{
	faster();
	int n;
	cin >> n;
	cin.ignore(1, '\n');
	GiangVien ds[n];
	for(int i = 0; i < n; ++i)
		cin >> ds[i];
	sort(ds, ds + n, cmp);
	for(int i = 0; i < n; ++i)
		cout << ds[i];
	return 0;
}