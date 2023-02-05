#include <iostream>
#include <string>
using namespace std;
string change_letter(string str);
int main() 
{
    int digit[]={0,1,2,3,4,5,6,7,8,9};
    int length=sizeof(digit)/sizeof(digit[0]);
    for(int y=length-1;y>0;y--)
    {
        cout<<digit[y];
    }

}