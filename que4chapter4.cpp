#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int month,day,year,days,month_to_day,leapyear;
	cout<<"\n ENTER THE YEAR :";
	cin>>year;
	cout<<"\n ENTER THE MONTH :";
	cin>>month;
	cout<<"\n  ENTER THE DAY :";
	cin>>day;
	cout<<"\n days"<<days;
	if(leapyear==0)
	{
		cout<<"\n is not leapyear";
	}
	else
	{
		cout<<"\n leapyear";
	}
	switch(month_to_day)
	case1:
	cout<<0+day;
	case2:
	cout<<31+day;
	case3:
	cout<<31+29+day;
	case4:
	cout<<31+29+31+day;
	case5:
	cout<<31+29+31+30+day;
	case6:
	cout<<31+29+31+30+31+day;
	case7:
	cout<<31+29+31+30+31+31+day;
	case8: 
	cout<<31+29+31+30+31+31+31+day;
	case9:
	cout<<31+29+31+30+31+31+31+31+day;
	case10:
	cout<<31+29+31+30+31+31+31+31+30+day;
	case11:
	cout<<31+29+31+30+31+31+31+31+30+31+day;
	case12:
	cout<<31+29+31+30+31+31+31+31+30+31+31+day;
	getch();
	return days=month_to_day+day;
}
bool leapyear(int year)
{
	if(year%100==0)
{
	if(400%100==0)
	{
		int leapyear=true;
	}

	else
	{
		int leapyear=false;
	}
}
 	else
 	{
 		if(year%4==0)
 		{
 			int leapyear=true;
		 }
		 else 
		 {
		 	int leapyear=false;	
		 }
	 }
	 return leapyear;
}


	