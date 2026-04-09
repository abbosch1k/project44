#include <iostream>
using namespace std;

int main() {
    string text;
    int key = 3;

    cin >> text;

    for(char &c : text)
        c += key;

    cout << text;
}
