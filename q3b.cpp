//include library
#include <iostream>
using namespace std;

//define function for finding the maximum of two numbers
//call by reference
void maximum(int &a1,int &a2,int &max)
{
    if (a1>a2)
    {
        max=a1;
    }
    else
        max=a2;
}

//driver function
int main()
{
    int a,b,c;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    //call the fucntion that finds the max of two numbers
    maximum(a,b,c);
    cout<<"The maximum of the two numbers is: "<<c<<endl;
    return 0;
} 

