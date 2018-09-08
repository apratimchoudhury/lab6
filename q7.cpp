// include library
#include<iostream>
using namespace std;

char toUpper(char i)
{
	int a= int(i);
	int b= a-32;
	char c= char(b);
	return c;
}
int main()
{
	char in;	
	cout<<"Enter a character: ";
	cin>>in;
	cout<<"The uppercase of this character is: "<<toUpper(in)<<endl;
	return 0;
}
