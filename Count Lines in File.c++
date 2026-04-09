#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("file.txt");
    string line;
    int count=0;

    while(getline(file,line)) count++;

    cout<<count;
}
