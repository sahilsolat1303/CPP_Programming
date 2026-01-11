/////////////////////////////////////////////////////////////////////
//
//  Function Name : Reverse
//  Description :   Reverse the array.
//  Input :         generic
//  Output :        -
//  Auther :        Sahil Subhash Solat
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
void Reverse(T *arr,int iSize)
{
    int start = 0;
    int end = 0;
    T temp;

    end = iSize - 1;
    while(start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }   
    
}

int main()
{
    double arr[] = {10.0, 20.5, 30.0, 45.7, 60.0, 75.2};


    Reverse(arr,sizeof(arr)/sizeof(arr[0]));


    return 0;
}
