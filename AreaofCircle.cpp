#include<iostream>
using namespace std;
class calculation
{
	public:
		float r,area;
		
		void getradius()
		{
			cout << "Enter radius:";
			cin >> r;
		}
		void Area()
		{
			area=3.14 * r * r;
		}
		void print()
		{
			cout << "Area of circle is:" << area;	
		}
};
int main()
{
	calculation obj;
	obj.getradius();
	obj.Area();
	obj.print();
	return 0;
}


