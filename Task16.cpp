#include <iostream>
using namespace std;
main()
{
    string word;
    cout << "Enter a word: ";
    getline(cin, word);
    int count = word.length();
    for (int x = 0; x < count; x++)
    {
        if (word[x] != 'A' && word[x] != 'E' && word[x] != 'I' && word[x] != 'O' && word[x] != 'U' && word[x] != 'a' && word[x] != 'e' && word[x] != 'i' && word[x] != 'o' && word[x] != 'u')
        {
            cout << word[x];
        }
    }
}