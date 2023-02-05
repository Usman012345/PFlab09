#include <iostream>
using namespace std;
main()
{
    int size1=2,size2;
    cout<<"Enter the size of 2nd array: ";
    cin>>size2;
    float array1[size1];
    for(int x = 0; x<size1; x++)
    {
        cout<<"Enter number of 1st array: ";
        cin>>array1[x];
    }
    float array2
    [size2];
    for(int y = 0; y<size2; y++)
    {
        cout<<"Enter number of 2nd array: ";
        cin>>array2[y];
    }
    cout<<array1[0]<<",";
    for(int z = 0; z<size2; z++)
    {
        cout<<array2[z]<<",";
    }
    cout<<array1[1];
}
