//include library
#include <iostream>
using namespace std;
//define function for adding two numbers
//call by reference
void sum(int &a1,int &a2, int &s)
{
    s=a1+a2;
}


//driver function
int main()
{
    int a,b,returnsum;
    cout<<"Enter two integers that you wish to add: ";
    cin>>a>>b;
    //call function that sums two numbers
    sum(a,b,returnsum);
    cout<<"The sum of the entered numbers is: "<<returnsum<<endl;

    return 0;
}
