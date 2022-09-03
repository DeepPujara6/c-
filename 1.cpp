#include<iostream>
using namespace std;
class demo
{
	int data;
	public:
		void setdata()
		{
			this->data=100;
			cout << data;
		}
};
int main()
{
	demo b;
	b.setdata();
	
}
