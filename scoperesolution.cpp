#include<iostream>
using namespace std;
int x=10;
int main()
{
	int x=20;
	cout << "value of gobal X=" << ::x << endl;
	cout << "value of local X=" << x;
}
