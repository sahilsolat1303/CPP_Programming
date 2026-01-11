/////////////////////////////////////////////////////////////////////
//
//  Function Name : Multiply
//  Description :   return multiplication of two numbers.
//  Input :         generic
//  Output :        -
//  Auther :        Sahil Subhash Solat
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;


template<class T>
T Multiply(T no1, T no2)
{
    T ans;
    ans = no1 * no2;

    return ans;
}

int main()
{

    int iRet = Multiply(10,20);
    cout<<iRet<<"\n";
    
    float fRet = Multiply(10.0f,20.0f);
    cout<<fRet<<"\n";
    return 0;
}