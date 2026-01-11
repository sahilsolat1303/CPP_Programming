/////////////////////////////////////////////////////////////////////
//
//  Function Name : Subtraction
//  Description :   return Substraction of two numbers.
//  Input :         generic
//  Output :        -
//  Auther :        Sahil Subhash Solat
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T Subtraction(T no1, T no2)
{
    T Sub;
    Sub = no1 - no2;

    return Sub;
}

int main()
{
   int iRet = Subtraction(10,20);
   cout<<"Subtraction is:"<<iRet<<"\n";

   float fRet = Subtraction(10.5f, 20.3f);
   cout<<"Subtraction is :"<<fRet<<"\n";

    return 0;
}
