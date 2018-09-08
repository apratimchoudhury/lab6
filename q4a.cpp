//include library
#include <iostream>
using namespace std;

//define function for finding minimum of two numbers
//call by value
int minimum(int a1,int a2)
{
    if (a1<a2)
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
    //call the fucntion that finds the min of two numbers
    cout<<"The minimum of these two numbers is: "<<minimum(a,b)<<endl;
    return 0;
}
