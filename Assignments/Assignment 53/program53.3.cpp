/////////////////////////////////////////////////////////////////////
//
//  Function Name : SecondMax
//  Description :   Return second maximum from the array.
//  Input :         generic
//  Output :        -
//  Auther :        Sahil Subhash Solat
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
T SecondMax(T *src,int iSize)
{
    T first = src[0];
    T second = src[0];

    for(int i = 0; i < iSize; i++)
    {
         if(first < src[i])
         {
            second = first;
            first = src[i];
         }   
         else if(src[i] > second && src[i] != first)
         {
            second = src[i];
         }
         
    }
    return second;
}

int main()
{
    int arr[] = {10,20,40,110,70,80,90,100};
    int iRet = 0;
    
    iRet = SecondMax(arr,sizeof(arr)/sizeof(arr[0]));

    cout<<"Second large number is :"<<iRet;

    return 0;
}
