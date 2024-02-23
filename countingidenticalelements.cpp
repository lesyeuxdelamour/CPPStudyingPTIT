#include <iostream>
#include <iomanip>
#include <map>
#include <set>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
        cin >> n;
        int a[n][n];
        set<int> st;
        map<int, int> mp;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> a[i][j];
                st.insert(a[i][j]);
            }
            for (auto x : st)
                mp[x]++;
            st.clear();
    	}
    	int cnt = 0;
        for (auto x : mp)
            if (x.second == n)
                cnt++;
        cout << cnt << endl;
    }
    return 0;
}