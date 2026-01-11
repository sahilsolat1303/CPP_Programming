/////////////////////////////////////////////////////////////////////
//
//  Function Name : Search
//  Description :   Check the given array and search the value present or not.
//  Input :         array
//  Output :        boolean
//  Auther :        Sahil Subhash Solat
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

template<class T>
bool Search(T *arr,int iSize, T value)
{
    int i = 0;
    for(i = 0; i< iSize; i++)
    {
        if(arr[i] == value)
        {
            return true;
        }
        
    }
    return false;
    
}

int main()
{
    int arr[] = {10,20,40,110,70,80,90,100};

    int iValue = 0;
    int iRet = 0;

    printf("Enter  number:\n");
    scanf("%d",&iValue);

    iRet = Search(arr,sizeof(arr)/sizeof(arr[0]),iValue);

    if(iRet == true)
    {
        cout<<"Element is found....\n";
    }
    else
    {
        cout<<"Element is not found...\n";
    }

    return 0;
}
