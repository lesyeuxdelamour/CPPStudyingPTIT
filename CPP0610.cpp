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
		
		void quydong(PhanSo &a, PhanSo &b)
		{
			a.rutgon();
			b.rutgon();
			ll lcm = a.mau * b.mau / __gcd(a.mau, b.mau);
			a.tu *= lcm / a.mau;
			b.tu *= lcm / b.mau;
			a.mau = b.mau = lcm;
		}
		
		friend PhanSo operator + (PhanSo a, PhanSo b)
		{
			PhanSo tong(0, 1);
			tong.quydong(a, b);
			tong.tu = a.tu + b.tu;
			tong.mau = (a.mau + b.mau) / 2;
			tong.rutgon();
			return tong;
		}
};

int main()
{
	faster();
	PhanSo p(1,1), q(1, 1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}