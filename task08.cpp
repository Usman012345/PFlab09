#include <iostream>
#include <string>
using namespace std;
int main() 
{
    int num;
    cout<<"Enter the number of no: ";
    cin>>num;
    int no[num];
    for(int x=0;x<num;x++)
    {
        cout<<"Enter the numbers: ";
        cin>>no[num];
    }
    int number;
    cout<<"Now add a number:";
    cin>>number;
    for(int y=0; y<num;y++)
    {
        if(number==no[y])
        cout<<"Already entered";
        else
        {
        cout<<"Okk";
        break;
    }
    }

    
    

}