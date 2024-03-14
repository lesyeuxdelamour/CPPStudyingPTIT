#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

string strupper(string s)
{
	string res = "";
	for(int i = 0; i < s.size(); ++i)
		res += toupper(s[i]);
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
		
		bool isFind(string s)
		{
			return strupper(this->name).find(s) != string::npos;
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
	while(k--)
	{
		string s;
		cin >> s;
		cout << "DANH SACH GIANG VIEN THEO TU KHOA " << s << ":" << endl;
		for(int i = 0; i < s.size(); ++i)
			s[i] = toupper(s[i]);
		for(int i = 0; i < n; ++i)
			if(ds[i].isFind(s))
				cout << ds[i];
	}
	return 0;
}