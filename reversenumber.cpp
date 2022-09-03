#include<iostream>
using namespace std;
int main()
{
	int n,reverse=0,a;
	cout << "enter number:" << endl;
	cin >> n;
	
	while(n!=0)
	{
		a=n%10;
		reverse=reverse*10+a;
		n=n/10;
	}
	cout << "reversed number:" << reverse << endl;
}
