////////////////////////////////////////////////////////////////////
//
//  Function Name : Division
//  Description :   return Division of two numbers.
//  Input :         generic
//  Output :        -
//  Auther :        Sahil Subhash Solat
//  Date :          10/01/2026
//
///////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

template<class T>
T Division(T no1, T no2)
{
    T div ;
    div = no1 * no2;

    return div;
}

int main()
{
   int iRet = Division(10,20);
   cout<<"Division is:"<<iRet<<"\n";

   float fRet = Division(10.5f, 20.3f);
   cout<<"Division is :"<<fRet<<"\n";

    return 0;
}
