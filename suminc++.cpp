#include<iostream>
using namespace std;
int main()
{
	int a,n,sum;
	cout << "enter a number:" << endl;
	cin >> n;
	
	while(n>0)
	{
		a=n%10;
		sum=sum+a;
		n=n/10;
	}
	cout << "sum=" << sum << endl;
}
