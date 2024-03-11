#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

struct Identity
{
	string name, birthdate;
};

int main()
{
	faster();
	int n;
	cin >> n;
	Identity ds[n];
	for(int i = 0; i < n; ++i)
		cin >> ds[i].name >> ds[i].birthdate;
	sort(ds, ds + n, [](struct Identity a, struct Identity b)
		{
			string day1, day2, month1, month2, year1, year2;
			day1 = a.birthdate.substr(3, 4);
			month1 = a.birthdate.substr(0, 1);
			year1 = a.birthdate.substr(5);
			day2 = b.birthdate.substr(3, 4);
			month2 = b.birthdate.substr(0, 1);
			year2 = b.birthdate.substr(5);
			if(year1 != year2)
				return year1 < year2;
			if(month1 != month2)
				return month1 < month2;
			return day1 < day2;
		}
		);
	cout << ds[n - 1].name << "\n" << ds[0].name;
	return 0;
}