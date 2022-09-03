#include <iostream>
using namespace std;
int main()
{
	int a[3][3],b[3][3],mul[3][3],i,j,k,sum;
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
			sum=0;
			for(k=0;k<=2;k++)
			{
				sum=sum+a[i][k]*b[k][j];
				mul[i][j]=sum;
			}
		}
	}
	cout << "\nmultiplication of two matrices is:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout << mul[i][j] << " ";	
		}
		cout<<endl;
		
	}
	cout << endl;
}
			
