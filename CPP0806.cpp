#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

class KhachHang;
class MatHang;
class HoaDon;

int sttkh = 0, sttmh = 0, stthd = 0;

map<string, KhachHang> KH;
map<string, MatHang> MH;

string standard(string s)
{
	string token, res = "";
	stringstream ss(s);
	while(ss >> token)
		res += token + " ";
	res.pop_back();
	return res;
}

class KhachHang
{
	public:
		string ID, name, sex, dob, address;
};

void nhapKH()
{
	string ID, name, sex, dob, address;
	ifstream fin("KH.in");
	int n;
	fin >> n;
	for(int i = 0; i < n; ++i)
	{
		sttkh++;
		ID = "KH0" + string((sttkh < 10) ? 1 : 0, '0') + to_string(sttkh);
		getline(fin >> ws, name);
		getline(fin >> ws, sex);
		getline(fin >> ws, dob);
		getline(fin >> ws, address);
		KH[ID] = {ID, standard(name), standard(sex), standard(dob), standard(address)};
	}
}	

class MatHang
{
	public:
		string ID, name, unit;
		ll buy, sell;
};

void nhapMH()
{
	string ID, name, unit;
	ll buy, sell;
	ifstream fin("MH.in");
	int n;
	fin >> n;
	for(int i = 0; i < n; ++i)
	{
		sttmh++;
		ID = "MH0" + string((sttmh < 10) ? 1 : 0, '0') + to_string(sttmh);
		getline(fin >> ws, name);
		getline(fin >> ws, unit);
		fin >> buy >> sell;
		MH[ID] = {ID, standard(name), standard(unit), buy, sell};
	}
}	

class HoaDon
{
	public:
		string IDhd, IDkh, IDmh;
		ll number;
};

void nhapxuatHD()
{
	string IDhd, IDkh, IDmh;
	ll number;
	ifstream fin("HD.in");
	int n;
	fin >> n;
	for(int i = 0; i < n; ++i)
	{
		stthd++;
		IDhd = "HD0" + string((stthd < 10) ? 1 : 0, '0') + to_string(stthd);
		fin >> IDkh >> IDmh >> number;
		cout << IDhd << " " << KH[IDkh].name << " " << KH[IDkh].address << " ";
		cout << MH[IDmh].name << " " << MH[IDmh].unit << " " << MH[IDmh].buy << " " << MH[IDmh].sell << " ";
		cout << number << " " << MH[IDmh].sell * number << endl;
	}
}

int main()
{
	faster();
	nhapKH();
	nhapMH();
	nhapxuatHD();
	return 0;
}