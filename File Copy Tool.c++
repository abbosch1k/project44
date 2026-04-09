#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("a.txt");
    ofstream out("b.txt");

    string line;
    while(getline(in,line))
        out << line << endl;
}
