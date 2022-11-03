#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main() 
{
    string word;
    getline(cin, word);
    int v = 0;
    for (int i = 0; i <= word.size(); i++)
    {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
        {
            v++;
        }
        if (word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U')
        {
            v++;
        }
    }

    cout << v << endl;
    return 0;
}