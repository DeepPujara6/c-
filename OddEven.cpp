#include<iostream>
using namespace std;
class Prime
{
	public:
		int n;
		
	public:
		void GetDetails(void);
		void calculation(void);
};
void Prime::GetDetails(void)
{
	cout<< "Enter number:";
	cin >> n;	
}
void Prime::calculation(void)
{
	if(n%2==0)
	{
		cout << "Entered No. is Even";
	}
	else
	{
		cout << "Entered No. is Odd";
	}
}
int main()
{
	Prime std;
	std.GetDetails();
	std.calculation();
	return 0;
}
