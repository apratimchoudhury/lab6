//include library
#include<iostream>
using namespace std;

//function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module
void returnValue(float &unitCst, float &units, float &taxRt)
{
    cout<<"Enter unit cost: ";
    cin>>unitCst;
    cout<<"Enter units: ";
    cin>>units;
    cout<<"Enter taxation rate: ";
    cin>>taxRt;
}

//function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue
//Called by reference
void calculateTax(float unitCst, float units, float taxRt, float &salesTx, float &totDue)
{
    salesTx=taxRt*unitCst*units;
    totDue=salesTx+(unitCst*units);
}

//function that receives the unitCst, units, taxRt, salesTx, and totDue and outputs them in a very readable format
void displayTax(float unitCst, float units, float taxRt, float salesTx, float totDue)
{
    cout<<"Units Purchased: "<<units<<endl;
    cout<<"Unit Cost: "<<unitCst<<endl;
    cout<<"Tax Rate: "<<taxRt<<endl;
    cout<<"Sales Tax: "<<salesTx<<endl;
    cout<<"Total Due: "<<totDue<<endl;
}

//driver function
int main()
{
    float unitCost,unitsPurchased,taxRate,salesTax,totalDue;
    returnValue(unitCost,unitsPurchased,taxRate);
    calculateTax(unitCost,unitsPurchased,taxRate,salesTax,totalDue);
    displayTax(unitCost,unitsPurchased,taxRate,salesTax,totalDue);
    return 0;
    
}
