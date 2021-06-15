#include<iostream>
#include<string>
using namespace std;

class add{
	
	public :
	
	string name;
	int year;
	string address;
	
	void intro()
	{
		cout<<"Name  :"<<name<<endl;
		cout<<"Year  :"<<year<<endl;
		cout<<"Address  :"<<address<<endl;
	}
	

};
int main()
{

	add r[3];
	for(int i=0;i<=2;i++)
	{
		cout<<"student "<<i+1<<endl;
		
		cout<<"enter name :";
		cin>>r[i].name;
				
		cout<<"enter year :";
		cin>>r[i].year;
				
		cout<<"enter address :";
		cin>>r[i].address;
	}
	for(int i=0;i<=2;i++)
	{
		r[i].intro();
	}
	
	return 0;
}

