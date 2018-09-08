#include <iostream>
using namespace std;

//define function for adding two numbers
//call by value
int sum(int a1,int a2)
{
    int s;
    s=a1+a2;
    return s;
}

//define function for finding maximum of two numbers
//call by value
int maximum(int b1,int b2)
{
    if (b1>b2)
    {
        return b1;
    }
    else 
        return b2;
}


//define function for finding minimum of two numbers
//call by value
int minimum(int c1,int c2)
{
    if (c1<c2)
    {
        return c1;
    }
    else 
        return c2;
}

//driver function
int main()
{
    //declare variables
    int a,b,i;
    
    //take input 1
    cout<<"Enter two integers: ";
    cin>>a>>b;   
    //take input 2
    cout<<"What operation would you like to perform: Finding Sum, Finding Maximum or Finding Minimum?"<<endl;
    cout<<"To Find Sum, Press 1"<<endl;
    cout<<"To Find Maximum, Press 2"<<endl;
    cout<<"To Find Minimum, Press 3"<<endl;
    cin>>i;
    //condition for calling the functions
    if(i==1)
    {
        cout<<"The sum of the two numbers is: "<<sum(a,b)<<endl;
    }
    else if(i==2)
    {
        cout<<"The maximum of the two numbers is: "<<maximum(a,b)<<endl;
    }
    else if(i==3)
    {
        cout<<"The minimum of the two numbers is: "<<minimum(a,b)<<endl;
    }
    else
        cout<<"Invalid Input!!!";
    
    return 0;
    
}
