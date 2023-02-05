#include <iostream>
using namespace std;
main()
{
    int count,number;
    cout << "Enter the total count of numbers: ";
    cin >> count;
    int count[count];
    for (int x = 0; x < count; x++)
    {
        cout << "Enter number: ";
        cin >> count[x];
    }
    int smallest=count[0];
    for (int y = 1; y < count; y++)
    {
      if(count[y]<smallest)
      {
         smallest = count[y];
      }
    }
    cout<<smallest;
}