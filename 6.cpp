#include<iostream>
#include<string>
using namespace std;

class rectangle{
	
	public :

		float a,b;
		
		void area()
		{
			cout<<"Area : "<<(a*b)<<endl;
		
		}
			
		void peri()
		{
			cout<<"Perimeter :"<<(a+b)/2<<endl;
		}
		
		rectangle(int A,int B)
		{
		a=A;
		b=B;	
		}
};
int main()
{
	rectangle s1=rectangle(4,5);
	s1.area();
	s1.peri();
	cout<<"------------------------------------------------------------------------------"<<endl;
	rectangle s2=rectangle(5,8);
	s2.area();
	s2.peri();
	return 0;
}
