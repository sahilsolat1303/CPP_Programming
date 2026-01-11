/////////////////////////////////////////////////////////////////////
//
//  Function Name : SumEven
//  Description :   Return sum of even all elements
//  Input :         -
//  Output :        -
//  Auther :        Sahil Subhash Solat
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T SumEven(T *arr,int iSize)
{
    T sum = 0;
    int i = 0;
    for(i = 0; i< iSize; i++)
    {
        if((int)arr[i]%2 == 0)
        {
            sum = arr[i]+sum;
        }
        
    }
    return sum;
    
}

int main()
{
    double arr[] = {10.0, 20.5, 30.0, 45.7, 60.0, 75.2};


    double dRet = 0.0;

    dRet = SumEven(arr,sizeof(arr)/sizeof(arr[0]));

    cout<<"Sum of even number is : "<<dRet;

    return 0;
}
