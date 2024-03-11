#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;
const double PI = 3.141592653589793238;

struct Point
{
	double x, y;
};

double distance(struct Point a, struct Point b)
{
	return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

double area(double a, double b, double c)
{
	if(a == 0 || b == 0 || c == 0)
		return -1;
	if(a + b <= c || b + c <= a || c + a <= b)
		return -1;
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		Point A, B, C;
		cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
		double a, b, c;
		a = distance(A, B);
		b = distance(B, C);
		c = distance(C, A);
		double S = area(a, b, c);
		if(S == -1)
			cout << "INVALID";
		else
		{
			double R = a * b * c / (4 * S);
			cout << fixed << setprecision(3) << R * R * PI;
		}
		cout << endl;
	}
	return 0;
}