#include<iostream>
using namespace std;
main()
{
    string word;
    char letter;
    cout<<"Enter word: ";
    cin>>word;
    cout<<"Enter letter: ";
    cin>>letter;
    int x=word.length();
    if(word[x-1]==letter)
    cout<<"True";
    else
    cout<<"false";

}