#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

struct PhanSo
{
	ll tu, mau;
};

void nhap(struct PhanSo &p)
{
	cin >> p.tu >> p.mau;
}

void in(struct PhanSo &p)
{
	cout << p.tu << "/" << p.mau;
}

void rutgon(struct PhanSo &p)
{
	ll gcd = __gcd(p.tu, p.mau);
	p.tu /= gcd;
	p.mau /= gcd;
}

struct PhanSo tong(struct PhanSo p, struct PhanSo q)
{
	ll lcm = p.mau * q.mau / __gcd(p.mau, q.mau);
	p.tu *= lcm / p.mau;
	q.tu *= lcm / q.mau;
	struct PhanSo t;
	t.tu = p.tu + q.tu;
	t.mau = lcm;
	rutgon(t);
	return t;
}

struct PhanSo nhan(struct PhanSo p, struct PhanSo q)
{
	struct PhanSo t;
	t.tu = p.tu * q.tu;
	t.mau = p.mau * q.mau;
	rutgon(t);
	return t;
}

void process(struct PhanSo p, struct PhanSo q)
{
	struct PhanSo C = nhan(tong(p, q), tong(p, q));
	struct PhanSo D = nhan(C, nhan(p, q));
	in(C);
	cout << " ";
	in(D);
	cout << endl;
}

int main()
{
	faster();
	int t;
	cin >> t;
	while (t--)
	{
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
	return 0;
}