#include <iostream>
using namespace std;
main()
{
    float sum, a, b, c, d, price;
    float change[4];
    cout << "Enter quarter: ";
    cin >> change[0];
    cout << "Enter Dime: ";
    cin >> change[1];
    cout << "Enter Nickel: ";
    cin >> change[2];
    cout << "Enter Penny: ";
    cin >> change[3];
    a = change[0] / 0.25;
    b = change[1] / 0.10;
    c = change[2] / 0.05;
    d = change[3] / 0.01;
    sum = a + b + c + d;
    cout<<"Enter price of desired item: ";
    cin>>price;
    if(price<sum)
    {
        cout<<"You can buy the item.";
    }
    else
    {
        cout<<"You can not buy the item.";
    }
}
