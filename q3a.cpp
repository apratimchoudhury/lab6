//include library
#include <iostream>
using namespace std;

//define function for finding maximum of two numbers
//call by value
int maximum(int a1,int a2)
{
    if (a1>a2)
    {
        return a1;
    }
    else 
        return a2;
}

//driver function
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    //call the fucntion that finds the max of two numbers
    cout<<"The maximum of these two numbers is: "<<maximum(a,b)<<endl;
    return 0;
}

