#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter word: ";
    cin>>word;
    int x=word.length();
    if(x%2==0)
    cout<<"true";
    else
    cout<<"false";

}