// include library
#include<iostream>
using namespace std;

//function to convert lowercase to uppercase
char toUpper(char i)
{
	int a= int(i);
	int b= a-32;
	char c= char(b);
	return c;
}

//function to convert uppercase to lowercase
char toLower(char i)
{
	int a= int(i);
	int b= a+32;
	char c= char(b);
	return c;
}


//driver function
int main()
{
	char in;	
	cout<<"Enter a character: ";
	cin>>in;
	int charValue= int(in);
	//condition to recognise whether uppercase or lowercase
	if(charValue>=65 && charValue<=90)
	{
	    cout<<"The lowercase of this character is: "<<toLower(in)<<endl;
	}
	
	else
	    cout<<"The uppercase of this character is: "<<toUpper(in)<<endl;
	
	return 0;
}
