#include<iostream>
#include<string>
using namespace std;

class rectangle{
	
	public :

		float a,b,c;
		
		void area()
		{
			cout<<"Area : "<<(a*b*c)<<endl;
		
		}
			
		void peri()
		{
			cout<<"Perimeter :"<<(a+b+c)/3<<endl;
		}
		
		rectangle(int A,int B ,int C)
		{
		a=A;
		b=B;
		c=C;	
		}
};
int main()
{
	rectangle s1=rectangle(2,4,6);
	
	s1.area();
	s1.peri();
	return 0;
}
