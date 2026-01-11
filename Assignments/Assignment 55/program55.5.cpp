/////////////////////////////////////////////////////////////////////
//
//  Function Name : Max
//  Description :   find maximum of four values.
//  Input :         generic
//  Output :        -
//  Auther :        Sahil Subhash Solat
//  Date :          10/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template <class T>
T Max(T a, T b, T c, T d)
{
    T max = a;

    if(b > max)
    {
        max = b;
    }
    if(c > max)
    {
        max = c;
    }
    if(d > max)
    {
        max = d;
    }
    return max;
}

int main()
{
    int iRet = Max(10, 40, 25, 30);
    cout << "Maximum (int) is : " <<iRet<<"\n";

    double dRet = Max(10.5, 40.2, 25.7, 30.9);
    cout << "Maximum (double) is : " <<dRet<<"\n";

    return 0;
}
