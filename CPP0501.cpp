#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

struct Point
{
	double x, y;
};

void input(struct Point &n)
{
	cin >> n.x >> n.y;
}

double distance(struct Point a, struct Point b)
{
	return sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
}

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		struct Point A, B;
		input(A); 
		input(B);
		cout << fixed << setprecision(4) << distance(A,B) << endl;
	}
	return 0;
}