#include<iostream>
using namespace std;

int main()
{
	int a[100],i,n;
	cout << "Enter size of an array:";
	cin >> n;
	cout << "Enter elements:";
	for(i=0;i<n;i++)
	{
			cin >> a[i];
	}
	cout << "Elements are:";
	for(i=0;i<n;i++)
	{
			cout << a[i] <<endl;
	}
}
