/////////////////////////////////////////////////////////////////////
//
//  Function Name : Min
//  Description :   Return smallest value of the array.
//  Input :         generic
//  Output :        -
//  Auther :        Sahil Subhash Solat
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;


template<class T>
T Min(T *arr, int iSize)
{
    T small = arr[0];
    for(int i = 0; i<iSize; i++)
    {
        if(small > arr[i])
        {
            small = arr[i];
        }

    }
    return small;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};
     
    int iRet = Min(arr,5);

    cout<<iRet<<"\n";

    float fRet = Min(brr,4);

    cout<<fRet<<"\n";
    
    return 0;
}