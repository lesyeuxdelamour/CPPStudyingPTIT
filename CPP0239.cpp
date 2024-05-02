#include <bits/stdc++.h>
#define endl "\n";
#define faster(); ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main()
{
	faster();
	int t;
	cin >> t;
	while(t--)
	{
		int R, C;
		cin >> R >> C;
		int mat[R][C];
		for(int i = 0; i < R; ++i)
			for(int j = 0; j < C; ++j)
				cin >> mat[i][j];
		int rank = C;
		for(int row = 0; row < rank; ++row)
			if(mat[row][row])
			{
				for(int col = 0; col < R; ++col)
					if(col != row)
					{
						double mult = (double)mat[col][row] / mat[row][row];
						for(int i = 0; i < rank; ++i)
							mat[col][i] -= mult * mat[row][i];
					}
			}
			else
			{
				bool reduce = true;
				for(int i = row + 1; i < R; ++i)
					if(mat[i][row])
					{
						for(int j = 0; j < rank; ++j)
							swap(mat[row][i], mat[i][j]);
						reduce = false;
						break;
					}
				if(reduce)
				{
					rank--;
					for(int i = 0; i < R; ++i)
						mat[i][row] = mat[i][rank];
				}
				row--;
			}
		cout << rank << endl;
	}
	return 0;
}