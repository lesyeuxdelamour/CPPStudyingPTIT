#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

struct PhanSo
{
	ll x, y;
};

void nhap(struct PhanSo &p)
{
	cin >> p.x >> p.y;
}

void in(struct PhanSo &p)
{
	cout << p.x << "/" << p.y;
}

void rutgon(struct PhanSo &p)
{
	ll gcd = __gcd(p.x, p.y);
	p.x /= gcd;
	p.y /= gcd;
}

struct PhanSo tong(struct PhanSo p, struct PhanSo q)
{
	ll lcm = p.y * q.y / __gcd(p.y, q.y);
	p.x *= lcm / p.y;
	q.x *= lcm / q.y;
	struct PhanSo t;
	t.x = p.x + q.x;
	t.y = lcm;
	rutgon(t);
	return t;
}

int main()
{
	faster();
	struct PhanSo p, q;
	nhap(p);
	nhap(q);
	struct PhanSo t = tong(p, q);
	in(t);
	return 0;
}