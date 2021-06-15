#include<iostream>
#include<string>
using namespace std;

class student{
	
	public :
		string name;
		int roll;
		void intro()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"Roll no :"<<roll<<endl;
		}
};
int main()
{
	student s1;
	s1.name="Uttam Yadav";
	s1.roll=19162;
	s1.intro();
	return 0;
}
