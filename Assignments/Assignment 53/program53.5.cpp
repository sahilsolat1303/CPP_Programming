/////////////////////////////////////////////////////////////////////
//
//  Function Name : Replace
//  Description :   replace old value from new value
//  Input :         generic
//  Output :        -
//  Auther :        Sahil Subhash Solat
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
void Replace(T *arr,int iSize, T oldVal, T newVal)
{
    int i = 0;
    for(i = 0; i< iSize; i++)
    {
        if(arr[i] == oldVal)
        {
            arr[i] = newVal;
        }
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
}

int main()
{
    int arr[] = {10,20,40,110,70,80,90,100};

    int oldValue = 0, newValue = 0;

    printf("Enter old number:\n");
    scanf("%d",&oldValue);

    printf("Enter new number:\n");
    scanf("%d",&newValue);
    
    Replace(arr,sizeof(arr)/sizeof(arr[0]),oldValue,newValue);

    return 0;
}
