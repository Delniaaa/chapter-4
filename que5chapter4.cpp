#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	double bmi,weight,height;
	cout<<"\n ENTER YOUR HEIGHT(M):";
	cin>>height;
	cout<<"\n ENTER YOUR WEIGHT(Kg)";
	cin>>weight;
	bmi=weight/(height*height);
	if (bmi<18.5)
	{
		cout<<"\n underweight";
	}
	else if(18.5<bmi&&bmi<24.9)
	{
		cout<<"\n normal";
	}
	else if(25.0<bmi&&bmi<29.9)
	{
		cout<<"\n overweight";
	}
	else
	{
		cout<<"\n obese";
	}
	getch();
	return 0;
}