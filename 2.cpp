#include<iostream>
#include<string>
using namespace std;

class student{
	
	public :
		string name;
		int roll;
		string address;

		void intro()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"Roll no :"<<roll<<endl;
			cout<<"Address :"<<address<<endl;
			cout<<"------------------------------------------------------------------------------"<<endl;
			
		}
};
int main()
{

student s1;
s1.name="Uttam";
s1.roll=19162;
s1.address="Prayagraj,UP,India";
s1.intro();


student s;
s1.name="Utsav";
s1.roll=19161;
s1.address="Prayagraj,UP,India";
s1.intro();
	return 0;
}
