/////////////////////////////////////////////////////////////////////
//
//  Function Name : Max
//  Description :   Find largest number from three numbers.
//  Input :         generic
//  Output :        -
//  Auther :        Sahil Subhash Solat
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;


template<class T>
T Max(T iNo1, T iNo2, T iNo3)
{
    if(iNo1 > iNo2 && iNo1 > iNo3)
    {
        return iNo1;
    }
    else if(iNo2 > iNo1 && iNo2 > iNo3)
    {
        return iNo2;
    }
    else
    {
        return iNo3;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    cout<<"Enter first number:\n";
    cin>>iValue1;

    cout<<"Enter second number:\n";
    cin>>iValue2;

    cout<<"Enter third number:\n";
    cin>>iValue3;

    iRet = Max(iValue1,iValue2,iValue3);

    cout<<"Max number is:"<<iRet;
    
    return 0;
}