#include <iostream>
#include <iomanip>
#define endl "\n"

using namespace std;
using ll = long long;

char fi[16] = "ABBADCCABDCCABD";
char se[16] = "ACCABCDDBBCDDBB";

double mark(char ans[15], int n)
{
	double mark = 10.0;
	if(n == 101)
	{
		for(int i = 0; i < 15; ++i)
			if(ans[i] != fi[i])
				mark -= 10.0/15;
	}
	if(n == 102)
	{
		for(int i = 0; i < 15; ++i)
			if(ans[i] != se[i])
				mark -= 10.0/15;
	}
	return mark;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		char ans[15];
		for(int i = 0; i < 15; ++i)
			cin >> ans[i];
		cout << setprecision(2) << fixed << mark(ans, n) << endl; 
	}
	return 0;
}