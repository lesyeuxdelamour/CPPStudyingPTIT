#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

class KhachHang;
class MatHang;
class HoaDon;

map<string, KhachHang> KH;
map<string, MatHang> MH;

class KhachHang
{
    private:
        string ID, name, sex, dob, address;
        static int stt;
    public:
        friend class HoaDon;
        KhachHang()
        {
            this->ID = "KH0";
            this->name = this->sex = this->dob = this->address = "";
        }

        friend istream& operator >> (istream &in, KhachHang &x)
        {
        	if(stt == 0)
           		in.ignore(1, '\n');
            stt++;
            x.ID += string((stt < 10) ? 1 : 0, '0') + to_string(stt);
            getline(in, x.name);
            getline(in, x.sex);
            getline(in, x.dob);
            getline(in, x.address);
            KH[x.ID] = x;
            return in;
        }
        
        string getname()
        {
        	return this->name;
		}
		
		string getaddress()
		{
			return this->address;
		}
};

class MatHang
{
    private:
        string ID, name, unit;
        ll buy, sell;
        static int stt;
    public:
        friend class HoaDon;
        MatHang()
        {
            this->ID = "MH0";
            this->name = this->unit = "";
            this->buy = this->sell = 0;
        }

        friend istream& operator >> (istream &in, MatHang &x)
        {
            in.ignore(1, '\n');
            stt++;
            x.ID += string((stt < 10) ? 1 : 0, '0') + to_string(stt);
            getline(in, x.name);
            getline(in, x.unit);
            in >> x.buy;
            in >> x.sell;
            MH[x.ID] = x;
            return in;      
        }
        
        string getname()
        {
        	return this->name;
		}
		
		string getunit()
		{
			return this->unit;
		}
		
		ll getbuy()
		{
			return this->buy;
		}
		
		ll getsell()
		{
			return this->sell;
		}
};

class HoaDon
{
    private:
        string IDhd, IDkh, IDmh;
        int number;
        static int stt;
    public:
        HoaDon()
        {
            this->IDhd = "HD0";
			this->IDkh = this->IDmh = "";
            this->number = 0;
        }    

        friend istream& operator >> (istream &in, HoaDon &x)
        {
            stt++;
            x.IDhd += string((stt < 10) ? 1 : 0, '0') + to_string(stt);
            in >> x.IDkh >> x.IDmh >> x.number;
            return in;      
        }

        friend ostream& operator << (ostream &out, HoaDon x)
        {
            out << x.IDhd << " " << KH[x.IDkh].getname() << " " << KH[x.IDkh].getaddress() << " ";
			out << MH[x.IDmh].getname() << " " << MH[x.IDmh].getunit() << " " << MH[x.IDmh].getbuy() << " " << MH[x.IDmh].getsell() << " ";
			out << x.number << " " << MH[x.IDmh].getsell() * x.number << endl;
            return out;
        }
};

int KhachHang::stt = 0;
int MatHang::stt = 0;
int HoaDon::stt = 0;

int main()
{
    faster();
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int n, m, k;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> dskh[i];
    cin >> m;
    for(int i = 0; i < m; i++)
        cin >> dsmh[i];
    cin >> k;
    for(int i = 0; i < k; i++)
        cin >> dshd[i];
    for(int i = 0; i < k; i++)
        cout << dshd[i];
    return 0;
}