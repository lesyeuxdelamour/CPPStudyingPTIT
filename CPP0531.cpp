#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

struct ToaDo
{
	int x, y, z;
};

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		ToaDo point[4], vec[3], vec_;
		for(int i = 0; i < 4; ++i)
			cin >> point[i].x >> point[i].y >> point[i].z;
		vec[0].x = (point[1].x - point[0].x);
	    vec[0].y = (point[1].y - point[0].y);
	    vec[0].z = (point[1].z - point[0].z);
	    vec[1].x = (point[2].x - point[0].x);
	    vec[1].y = (point[2].y - point[0].y);
	    vec[1].z = (point[2].z - point[0].z);
	    vec[2].x = (point[3].x - point[0].x);
	    vec[2].y = (point[3].y - point[0].y);
	    vec[2].z = (point[3].z - point[0].z);
		vec_.x = vec[0].y * vec[1].z - vec[0].z * vec[1].y;
	    vec_.y = vec[0].z * vec[1].x - vec[0].x * vec[1].z;
	    vec_.z = vec[0].x * vec[1].y - vec[0].y * vec[1].x;
	    int ans = vec_.x * vec[2].x + vec_.y * vec[2].y + vec_.z * vec[2].z;
	    if(!ans)
	    	cout << "YES";
	    else
	    	cout << "NO";
	    cout << endl;
	}
	return 0;
}