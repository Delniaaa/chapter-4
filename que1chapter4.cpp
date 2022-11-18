#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
	string num,num1,num2,num3,num4;
	cout<<"\nENTER 4 NUMBER THAT BETWEEN THEM THERE ARE *: ";
	cin>>num;
	cout<<num<<endl;
	
	num1=num.substr(0,num.find("*"));
	num.erase(0,num.find("*")+1);

	num2=num.substr(0,num.find("*"));
	num.erase(0,num.find("*")+1);
	
	num3=num.substr(0,num.find("*"));
	num.erase(0,num.find("*")+1);
	
	num4=num.substr(0,num.find("*"));
	num.erase(0,num.find("*")+1);
	
	num4=num;
	cout<<num1<<endl<<num2<<endl<<num3<<endl<<num4<<endl;
	cout<<num4<<endl<<num3<<endl<<num2<<endl<<num1<<endl;
	
	getch();
	return 0;
}

