#include<iostream>
#include<conio.h>
using namespace std;
int grosspay(int);
int netpay(int);
int main()
{
	int hour,rate;
	cout<<"\n ENTER THR RATE :";
	cin>>rate;
	cout<<"\n ENTER THE HOURE:";
	cin>>hour;
	int grosspay();
	int netpay();
	getch();
	return 0;
}
int grosspay(int num)
{
	int g,hour;
	if(hour>40)
	{
		g==(40*20)+1.5;
	}
	else
	{
		g==(40*20);
	}
	return g;
}
int netpay(int num)
{
	int n,netpay;
	if(n>10)
	{
		 n-1.5;
	}
	else
	{
		(netpay==n);
	}
	return n;
}