#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

string shorten(string s)
{
	stringstream ss(s);	
	string token, res = "";
	while(ss >> token)
		res += toupper(token[0]);
	return res;
}

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
			x.major = shorten(x.major);
			return in;
		}
		
		friend ostream& operator << (ostream &out, GiangVien x)
		{
			out << x.ID << " " << x.name << " " << x.major << endl;
			return out;
		}
		
		bool isMajor(string s)
		{
			return this->major == s;
		}
};

int GiangVien::stt = 0;

int main()
{
	faster();
	int n, k;
	cin >> n;
	cin.ignore(1, '\n');
	GiangVien ds[n];
	for(int i = 0; i < n; ++i)
		cin >> ds[i];
	cin >> k;
	cin.ignore(1, '\n');
	while(k--)
	{
		string s;
		getline(cin, s);
		s = shorten(s);
		cout << "DANH SACH GIANG VIEN BO MON " << s << ":" << endl;
		for(int i = 0; i < n; ++i)
			if(ds[i].isMajor(s))
				cout << ds[i];
	}
	return 0;
}