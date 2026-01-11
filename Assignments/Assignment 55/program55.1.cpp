/////////////////////////////////////////////////////////////////////
//
//  Function Name : Add
//  Description :   return Addition of two numbers.
//  Input :         generic
//  Output :        -
//  Auther :        Sahil Subhash Solat
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T Add(T no1, T no2)
{
    T Sum;
    Sum = no1 + no2;

    return Sum;
}

int main()
{
   int iRet = Add(10,20);
   cout<<"Addition is:"<<iRet<<"\n";

   float fRet = Add(10.5f, 20.3f);
   cout<<"Addition is :"<<fRet<<"\n";

    return 0;
}
