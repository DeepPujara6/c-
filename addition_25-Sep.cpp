//addition of two numbers using static member function 
#include <iostream>
using namespace std;
class addition
{
	static int num1,num2,ans;
 static int count;
	public:
			static	int add(int a , int b)
				{
					count=a+b;
					cout << count << endl;
					
				}
};
int addition :: num1;
int addition :: num2;
int main()
{
	addition x,y;
	x.add(1,1);
	y.add(2,2);
	addition::add(int a, int b )
	return 0;
}
