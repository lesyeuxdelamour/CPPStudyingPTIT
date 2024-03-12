#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

class PhanSo
{
	private:
		ll tu, mau;
	public:
		PhanSo(ll tu, ll mau)
		{
			this->tu = tu;
			this->mau = mau;
		}
		
		friend istream& operator >> (istream &in, PhanSo &x)
		{
			in >> x.tu >> x.mau;
			return in;
		}
		
		friend ostream& operator << (ostream &out, PhanSo x)
		{
			out << x.tu << "/" << x.mau;
			return out;
		}
		
		void rutgon()
		{
			ll gcd = __gcd(tu, mau);
			tu /= gcd;
			mau /= gcd;
		}
};

int main()
{
	faster();
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}