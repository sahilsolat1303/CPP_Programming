/////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description :   Display First value to the second 
//  Input :         -
//  Output :        -
//  Auther :        Sahil Subhash Solat
//  Date :          09/01/2026
//
/////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

template<class T>
void Display(T value, int isize)
{
    int i = 0;
    for(i = 0; i< isize; i++)
    {
        cout<<value<<"\t";
    }
    cout<<"\n";
}

int main()
{
    Display('M',7);
    Display(11,3);
    Display(3.7,6);
    
    return 0;
}