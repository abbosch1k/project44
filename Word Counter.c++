#include <iostream>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    int words = 1;
    for(char c : text)
        if(c == ' ') words++;

    cout << "Words: " << words;
}
