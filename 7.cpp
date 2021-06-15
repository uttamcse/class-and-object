#include<iostream>
#include<string>
using namespace std;

class Area{
	
	public :
		int a,b;
		
		void setdata(int A, int B)
		{
			a=A;
			b=B;
		}
		
		void area()
		{
		cout<<"Area :"<<a*b	<<endl;
		}
	
};
int main()
{
	Area a1;
	a1.setdata(4,7);
	a1.area(); 
	return 0;
}
