#include <iostream>
using namespace std;
int main()
{
	int a[3][3],b[3][3],sum[3][3],i,j;
	cout << "enter elements of 1st matrix:";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin >> a[i][j];
		}
	}
	cout << endl;
	cout << "Enter elements of 2nd matrix:";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin >> b[i][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]= a[i][j] + b[i][j];
		}
	}
	cout << endl << "sum of two matrix is:" << endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout << sum[i][j] << endl;
		}
	}

}
