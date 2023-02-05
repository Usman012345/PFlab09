#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter word: ";
    cin>>word;
    int x=word.length();
    for(int y=x-1;y>=0;y--)
    {
        cout<<word[y];
    }

}