/////////////////////////////////////////////////////////////////////
//
//  Function Name : CopyArray
//  Description :   copy one array into another array.
//  Input :         string array
//  Output :        - 
//  Auther :        Sahil Subhash Solat
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
void CopyArray(T *src, T *dest, int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        dest[i] = src[i];
        cout << dest[i] << " ";
    }
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70,80,90,100};
    int brr[] = {'\0'};

    CopyArray(arr, brr, sizeof(arr)/sizeof(arr[0]));

    return 0;
}
