#include<iostream>
#include<string>
using namespace std;

class Average{
	
	public :
		int a,b,c;
		
		void avg()
		{
				cout<<"Average :"<<(a+b+c)/3<<endl;
		
		}
		
		Average(int A ,int B,int C)
		{
			a=A;
			b=B;
			c=C;
		}
	
};
int main()
{
Average a1=	Average(77,98,80);
a1.avg();
	return 0;
}

