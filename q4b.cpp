//include library
#include <iostream>
using namespace std;

//define function for finding the minimum of two numbers
//call by reference
void maximum(int &a1,int &a2,int &min)
{
    if (a1<a2)
    {
        min=a1;
    }
    else
        min=a2;
}

//driver function
int main()
{
    int a,b,c;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    //call the fucntion that finds the min of two numbers
    maximum(a,b,c);
    cout<<"The minimum of the two numbers is: "<<c<<endl;
    return 0;
} 

