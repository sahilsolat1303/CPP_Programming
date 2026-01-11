/////////////////////////////////////////////////////////////////////
//
//  Function Name : CheckSorted
//  Description :   Check the given array is sorted or not.
//  Input :         array
//  Output :        boolean
//  Auther :        Sahil Subhash Solat
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
bool CheckSorted(T *src,int iSize)
{
    for(int i = 0; i < iSize; i++)
    {
        if(src[i] > src[i+1])
        {
            return false;
        }
       
    }
    return true;
}

int main()
{
    int arr[] = {10,20,40,110,70,80,90,100};
    int iRet;
    
    iRet = CheckSorted(arr,sizeof(arr)/sizeof(arr[0]));

    if(iRet == true)
    {
        cout<<"Array is sorted...\n";

    }
    else
    {
        cout<<"Array is not sorted..\n";
    }

    return 0;
}
