#include<iostream>
#include<string>
using namespace std;

class add{
	
	public :
	
	float a,b,c;
	
	void sum()
	{
		cout<<"Sum is :"<<a*b*c<<endl;
	}
	
	void sub()
	{
		cout<<"Multi is :"<<(a+b+c)/3<<endl;
	}
};
int main()
{

	add r[3];
	for(int i=0;i<=2;i++)
	{
		cout<<"student "<<i+1<<endl;
		
		cout<<"enter a :";
		cin>>r[i].a;
				
		cout<<"enter b :";
		cin>>r[i].b;
				
		cout<<"enter c :";
		cin>>r[i].c;
	}
	for(int i=0;i<=2;i++)
	{
		r[i].sub();
	}
	
		for(int i=0;i<=2;i++)
	{
		r[i].sum();
	}
	return 0;
}
