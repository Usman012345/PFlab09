#include <iostream>
using namespace std;
main()
{
    int count, num;
    cout << "Enter the total count of numbers: ";
    cin >> count;
    int array[count];
    for (int x = 0; x < count; x++)
    {
        cout << "Enter number: ";
        cin >> array[x];
    }
    int largest=array[0];
    for (int y = 1; y < count; y++)
    {
      if(array[y]>largest)
      {
         largest = array[y];
      }
    }
    cout<<largest;
}