#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;
using ll = long long;

int main()
{
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
		{
			if(mat[row][row])
			{
				for(int col = 0; col < R; ++col)
				{
					if(col != row)
					{
						double mult = (double)mat[col][row] / mat[row][row];
						for(int i = 0; i < rank; ++i)
							mat[col][i] -= mult * mat[row][i];
					}
				}
			}
			else
			{
				bool reduce = true;
				for(int i = row + 1; i < R; ++i)
				{
					if(mat[i][row])
					{
						for(int j = 0; j < rank; ++j)
						{
							int tmp = mat[row][j];
							mat[row][j] = mat[i][j];
							mat[i][j] = tmp;
						}
						reduce = false;
						break;
					}
				}
				if(reduce)
				{
					rank--;
					for(int i = 0; i < R; ++i)
						mat[i][row] = mat[i][rank];
				}
				row--;
			}
		}
		cout << rank << endl;
	}
	return 0;
}