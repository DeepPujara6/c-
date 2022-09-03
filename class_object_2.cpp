#include<iostream>
using namespace std;
class Accdetails
{
	public:
		char Name[20];
		int AccNo;
		char AccType[10];
		int Balance;
		double DisplayName()
		{
			cout << "Deep Pujara" << endl;
			
		}
		int DisplayBalance()
		{
			cout << "5000" << endl;
		}	
};
int main()
{
	Accdetails std;
	std.DisplayName();
	std.DisplayBalance();
	return 0;
}
