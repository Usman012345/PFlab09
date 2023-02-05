#include <iostream>
using namespace std;
main()
{
    int count;
    float sum;
    cout<<"Enter the count of the array: ";
    cin>>count;
    float resistors[count];
    for(int x = 0; x<count; x++)
    {
        cout<<"Enter resistance of" <<x<<" resistor: ";
        cin>>resistors[x];
        sum = sum + resistors[x];
    }
    cout<<"Total resistance is "<<sum<<" ohms.";
}
