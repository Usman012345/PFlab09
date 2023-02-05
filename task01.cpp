#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter word: ";
    cin>>word;
    int x=word.length();
    int count=1;
    for(int y=0;y<x;y++)
    {
        cout<<"Alphabet at "<<count <<" is "<<word[y]<<endl;
        count++;
    }

}