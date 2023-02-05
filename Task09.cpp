#include<iostream>
using namespace std;
main()
{
    int size,number;
     cout<<"Enter the total count of numbers: ";
    cin>>size;
    int array[size];
     for(int x = 0; x<size; x++)
    {
        cout<<"Enter number: ";
        cin>>array[x];
    }
       cout<<"Enter the number you want to find scaler product with: ";
    cin>>number; 
    for(int x = size-1; x>= 0; x--)
    {
        int scaler;
        scaler = number*array[x];
        cout<<"Scaler product: "<<scaler<<endl;
    }
}