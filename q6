#include <iostream>

using namespace std;

//a function that outputs the sum of all even numbers between firstNum and secondNum
int sumEvenNumbers(int firstNum,int secondNum)
{
    int sum;
    for(int i=firstNum;i<=secondNum;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    return sum;
}

//a function that outputs the sum of all odd  numbers between firstNum and secondNum
int sumOddNumbers(int firstNum,int secondNum)
{
    int sum;
    for(int i=firstNum;i<=secondNum;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    return sum;
}

//a function that outputs the sum of squares of all odd numbers between firstNum and secondNum
int sumSquareOddNumbers(int firstNum,int secondNum)
{
    int sum;
    int i=firstNum;
    for(int i=firstNum;i<=secondNum;i++)
    {
        if(i%2!=0)
        {
            sum=sum+i*i;
        }
    }
    return sum;
}

//a function that outputs the sum of sqaures of all even numbers between firstNum and secondNum
int sumSquareEvenNumbers(int firstNum,int secondNum)
{
    int sum;
    for(int i=firstNum;i<=secondNum;i++)
    {
        if(i%2==0)
        {
            sum=sum+i*i;
        }
    }
    return sum;
}

//driver function
int main()
{
    int firstNum,secondNum,sumEven,sumOdd,sumSquareEven,sumSquareOdd;
    cout<<"Enter the first number: ";
    cin>>firstNum;
    cout<<"Enter the second number: ";
    cin>>secondNum;
    sumEven=sumEvenNumbers(firstNum,secondNum);
    sumOdd=sumOddNumbers(firstNum,secondNum);
    sumSquareEven=sumSquareEvenNumbers(firstNum,secondNum);
    sumSquareOdd=sumSquareOddNumbers(firstNum,secondNum);
    cout<<"The sum of all even numbers between "<<firstNum<<" and "<<secondNum<<" is: "<<sumEven<<endl;
    cout<<"The sum of all odd numbers between "<<firstNum<<" and "<<secondNum<<" is: "<<sumOdd<<endl;
    cout<<"The sum of squares of all even numbers between "<<firstNum<<" and "<<secondNum<<" is: "<<sumSquareEven<<endl;
    cout<<"The sum of squares of all odd numbers between "<<firstNum<<" and "<<secondNum<<" is: "<<sumSquareOdd<<endl;
    return 0;
    
    
    
}
