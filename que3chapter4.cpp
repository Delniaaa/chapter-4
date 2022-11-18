#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char character;
	cout<<"\n ENTER A CHARACTER :";
	cin>>character;
	switch(character)
	{
		case'A':	
		case'B':
		case'C':	
		case'a':
		case'b':
		case'c':	
		cout<<"\n 2";
		break;
		case'D':
		case'E':
		case'F':	
		case'd':
		case'e':
		case'f':
		cout<<"\n 3";
		break;
		case'G':
		case'H':
		case'I':	
		case'g':
		case'h':
		case'i':
		cout<<"\n 4";
		break;
		case'J':
		case'K':
		case'L':	
		case'j':
		case'k':
		case'l':
		cout<<"\n 5";
		break;
		case'M':
		case'N':
		case'O':	
		case'm':
		case'n':
		case'o':
		cout<<"\n 6";
		break;
		case'P':
		case'Q':
		case'R':	
		case'S':
		case'p':
		case'q':
		case'r':
		case's':
		cout<<"\n 7";
		break;
		case'T':
		case'U':
		case'V':	
		case't':
		case'u':
		case'v':
		cout<<"\n 8";
		break;
		case'W':
		case'X':
		case'Y':	
		case'Z':
		case'w':
		case'x':
		case'y':
		case'z':
		cout<<"\n 9";
		break;
		default:
		cout<<"\n undefault";
		getch();
		cin.ignore();
		cin.get();
		return 0;
			
	}
	
}