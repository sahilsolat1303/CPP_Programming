/////////////////////////////////////////////////////////////////////
//
//  Function Name : Swap
//  Description :   Swap two values.
//  Input :         generic
//  Output :        -
//  Auther :        Sahil Subhash Solat
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T Swap(T no1, T no2)
{
    cout<<"Before Swapping no1 & no2 is"<<no1<<"\t"<<no2<<"\n";
    no1 = no1 + no2;
    no2 = no1 - no2;
    no1 = no2 - no1;

    cout<<"After Swapping no1 & no2 is"<<no1<<"\t"<<no2<<"\n";

}

int main()
{
   int a = 10, b = 20;
   Swap(a,b);

   float x = 3.5f, y = 7.8f;
   Swap(x,y);

    return 0;
}
