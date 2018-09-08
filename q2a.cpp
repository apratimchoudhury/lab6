//include library
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


//driver function
int main()
{
    int a,b;
    cout<<"Enter two integers that you wish to add: ";
    cin>>a>>b;
    //call function that sums two numbers
    cout<<"The sum of the entered numbers is: "<<sum(a,b)<<endl;

    return 0;
}

