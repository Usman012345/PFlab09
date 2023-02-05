#include <iostream>
#include <string>
using namespace std;
string change_letter(string str);
int main() 
{
    string word;
    cout<<"Enter the word: ";
    cin>>word;
    int x= word.length();
    int count=0;
    for(int y=0;y<=x-1;y++)
    {
        if(word[y]=='a' ||word[y]=='e' ||word[y]=='i' ||word[y]=='o' ||word[y]=='u')
        {
            count++;
        }
    }
    cout<<count;
}