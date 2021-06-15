#include<iostream>
#include<string>
using namespace std;

class rect{
	
	public :
	
	float a,b,c;
	
	void area()
	{
		cout<<"Area is :"<<a*b*c<<endl;
	}
	
	void perimeter()
	{
		cout<<"Perimeter is :"<<(a+b+c)/3<<endl;
	}
};
int main()
{

	rect r1;
	r1.a=3;
	r1.b=5;
	r1.c=7;
	r1.area();
	r1.perimeter();
	return 0;
}
