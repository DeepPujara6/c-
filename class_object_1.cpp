#include<iostream>
using namespace std;
class student
{
	public:
		char Name[20];
		int RollNo;
		int Sem;
		
	public:
		void GetDetails(void);
		void PrintDetails(void);		
};
void student::GetDetails(void)
{
	cout<< "Enter name:";
	cin >> Name;
	cout << "Enter roll number:";
	cin >> RollNo;
	cout << "Enter semester:";
	cin >> Sem;
}
void student::PrintDetails(void)
{
	cout << "Details of student:\n";
	cout << "Name:" << Name << endl;
	cout << "Roll Number:" << RollNo << endl;
	cout << "Enter semester:" << Sem << endl;
}
int main()
{
	student std;
	std.GetDetails();
	std.PrintDetails();
	return 0;
}
