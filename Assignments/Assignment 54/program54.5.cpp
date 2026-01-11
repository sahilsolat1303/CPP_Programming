/////////////////////////////////////////////////////////////////////
//
//  Function Name : Min
//  Description :   return smallest element from an array.
//  Input :         generic
//  Output :        -
//  Auther :        Sahil Subhash Solat
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T Min(T *arr,int iSize)
{
    int i = 0;
    T small = arr[0];
    for(i = iSize - 1; i>=0; i--)
    {
        if(arr[i] < small)
        {
            small = arr[i];
        }
    }
    return small;   
    
}

int main()
{
    double arr[] = {10.0, 20.5, 30.0, 45.7, 60.0, 75.2};
    double dRet = 0.0;

    dRet = Min(arr,sizeof(arr)/sizeof(arr[0]));
    cout<<"smallest Number is:"<<dRet;

    return 0;
}
