#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

struct ThiSinh
{
	string name, birthdate;
	double a, b, c;
};

void nhap(struct ThiSinh &x)
{
	getline(cin, x.name);
	cin >> x.birthdate >> x.a >> x.b >> x.c;
}

void in(struct ThiSinh &x)
{
	cout << x.name << " " << x.birthdate << " ";
	cout << fixed << setprecision(1) << x.a + x.b + x.c;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}