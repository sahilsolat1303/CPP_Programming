/////////////////////////////////////////////////////////////////////
//
//  Function Name : Max
//  Description :   Return maximum from the array.
//  Input :         generic
//  Output :        -
//  Auther :        Sahil Subhash Solat
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;


template<class T>
T Max(T *arr, int iSize)
{
    T large = arr[1];
    for(int i = 0; i<iSize; i++)
    {
        if(large < arr[i])
        {
            large = arr[i];
        }

    }
    return large;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,3.7,9.8,8.7};
     
    int iRet = Max(arr,5);

    cout<<iRet<<"\n";

    float fRet = Max(brr,4);

    cout<<fRet<<"\n";
    
    return 0;
}