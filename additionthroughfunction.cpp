//with argument with return type

#include<iostream>
using namespace std;
int add(int,int);
int main()
{
	int a=2,b=3,ans;
	ans=add(a,b);
	cout << "addition is=" << ans;
	return 0;
}
int add(int x,int y)
{
	return x+y;
}
