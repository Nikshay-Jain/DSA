#include <iostream>
using namespace std;

int main() {
    char ch[1000000];
    cout << "Enter sentence: " << endl;
    cin.getline(ch, 1000000);
    int end = 0, i = 0, c = 0, maxlen = 0;
    
    while (ch[i] != '\0')
    {
        if (ch[i] == ' ')
        {
            if (maxlen < c)
            {
                maxlen = c;
                end = i;
            }
            c = 0;
        }
        else
            c++;
        i++;
    }
    
    // Check if the last word is the longest
    if (maxlen < c)
    {
        maxlen = c;
        end = i;
    }
    
    cout << "Length of the longest word: " << maxlen << endl;
    cout << "Longest word: ";
    for (i = end - maxlen; i < end; i++)
        cout << ch[i];
}